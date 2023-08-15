//
// Created by whyafer on 2023/8/15.
//

#ifndef CALC_EXPRESSION_H
#define CALC_EXPRESSION_H

#include <stack>
#include <QDebug>

using std::stack;

class Expression {
private:

	static constexpr int MAXN = 101;

	int len;
	char s[MAXN];

public:
	static constexpr double ERROR = -2e9;

	Expression() {}

	Expression(std::string str) {
		for (int i = 0; i < str.size(); i++)
			s[i + 1] = str[i];
		s[str.size() + 1] = '\0';
		len = str.size();
	}

	short ord(char ch) {
		if (ch == '(' || ch == ')') return 0;
		if (ch == '+' || ch == '-') return 1;
		if (ch == '*' || ch == '/') return 2;
		if (ch == '~') return 3;
	}

	bool isNum(char ch) {
		return ch >= '0' && ch <= '9';
	}

	bool isOperator(char ch) {
		return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '~';
	}

	bool Check() {
		int p = 0, cnt = 0;
		char *str = new char[len << 1];
		stack<char> S;
		s[0] = '+';
		while (s[++p] != '\0') {
			if (s[p] == '(') {
				S.push('(');
				str[++cnt] = '(';
			} else if (s[p] == ')') {
				if (S.empty()) return false;
				else S.pop();
				str[++cnt] = ')';
			} else if (s[p] == '-') {
				if (p == 1 || isOperator(s[p - 1]) || str[p - 1] == '(') {
					str[++cnt] = '~';
				} else str[++cnt] = '-';
			} else if (isOperator(s[p]) && isOperator(s[p - 1])) return false;
			else if (isNum(s[p]) || s[p] == '.' || isOperator(s[p]))
				str[++cnt] = s[p];
		}
		if (!S.empty()) return false;
		for (int i = 1; i <= cnt; i++)
			s[i] = str[i];
		s[cnt + 1] = '\0';
		len = cnt;
		delete[] str;
		return true;
	}

	char *Transform() {
		int cnt = 0;
		stack<char> st;
		char *exp = new char[len << 1];

		for (int i = 1; i <= len; i++) {
			if (isNum(s[i - 1]) && !isNum(s[i]) && s[i] != '.') exp[++cnt] = '#';
			if (isNum(s[i]))
				exp[++cnt] = s[i];
			else if (s[i] == '.') exp[++cnt] = s[i];
			else if (s[i] == '(') {
				st.push('(');
			} else if (s[i] == ')') {
				while (st.top() != '(') {
					exp[++cnt] = st.top();
					st.pop();
				}
				st.pop();
			} else if (isOperator(s[i])) {
				while (!st.empty()) {
					if (ord(s[i]) > ord(st.top()) || s[i] == '~') {
						st.push(s[i]);
						break;
					} else {
						exp[++cnt] = st.top();
						st.pop();
					}
				}
				if (st.empty()) st.push(s[i]);
			}
		}
		if (isNum(s[len])) exp[++cnt] = '#';
		while (!st.empty()) {
			exp[++cnt] = st.top();
			st.pop();
		}
		exp[++cnt] = '\0';
		return exp;
	}

	double val() {
		bool check = Check();
		if (!check) return ERROR;
		char *exp = Transform();
		char p = 0;
		double val = 0;
		double dval = 0;
		double base = 10;
		bool number = false;
		stack<double> st;
		while (exp[++p] != '\0') {
			if (exp[p] >= '0' && exp[p] <= '9') {
				if (number) {
					dval += (exp[p] - '0') / base;
					base *= 10;
				} else val = val * 10 + exp[p] - '0';
			} else if (exp[p] == '.') {
				number = true;
			} else if (isOperator(exp[p])) {
				double b = st.top();
				st.pop();
				double a;
				switch (exp[p]) {
					case '+':
						a = st.top();
						st.pop();
						st.push(a + b);

						break;
					case '-':
						a = st.top();
						st.pop();
						st.push(a - b);
						break;
					case '*':
						a = st.top();
						st.pop();
						st.push(a * b);
						break;
					case '/':
						a = st.top();
						st.pop();
						if (b == 0) {
							return ERROR;
						}
						st.push(a / b);
						break;
					case '~':
						st.push(-b);
						break;
				}
			} else if (exp[p] == '#') {
				st.push(val + dval);
				val = 0;
				dval = 0;
				base = 10;
				number = false;
			}
		}
		delete exp;
		return st.top();
	}
};

#endif //CALC_EXPRESSION_H
