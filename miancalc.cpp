//
// Created by whyafer on 2023/8/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_miancalc.h" resolved

#include "miancalc.h"
#include "ui_miancalc.h"
#include "expression.h"

miancalc::miancalc(QWidget *parent) :
		QWidget(parent), ui(new Ui::miancalc) {
	ui->setupUi(this);
}

miancalc::~miancalc() {
	delete ui;
}

bool isEqual = false;

void miancalc::on_buttons_clicked() {
	QPushButton *btn = (QPushButton *) sender();
	QString name = btn->objectName();//获取发送信息的按钮名

	QLineEdit *le = ui->lineEdit;
	QString text = le->text();//获取当前文本框的表达式
	if (text == "ERROR") text = "";

	if (name == "num1") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "1";
	} else if (name == "num2") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "2";
	} else if (name == "num3") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "3";
	} else if (name == "num4") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "4";
	} else if (name == "num5") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "5";
	} else if (name == "num6") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "6";
	} else if (name == "num7") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "7";
	} else if (name == "num8") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "8";
	} else if (name == "num9") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "9";
	} else if (name == "num0") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "0";
	} else if (name == "add") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "+";
	} else if (name == "sub") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "-";
	} else if (name == "times") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "*";
	} else if (name == "divide") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "/";
	} else if (name == "ac") {
		text = "";
	} else if (name == "equal") {//开始计算，若出现错误返回ERROR
		double answer = Expression(text.toStdString()).val();
		if (answer == Expression::ERROR) {
			le->setText("ERROR");
			return;
		}
		text = QString::fromStdString(std::to_string(answer));
		isEqual = true;
	} else if (name == "del") {
		if (text.size() == 0) return;
		std::string tmp = text.toStdString();
		tmp.erase(tmp.end() - 1);
		text = QString::fromStdString(tmp);
	} else if (name == "dot") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += ".";
	} else if (name == "lbracket") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += "(";
	} else if (name == "rbracket") {
		if (isEqual) {
			text = "";
			isEqual = false;
		}
		text += ")";
	}
	le->setText(text);
}
