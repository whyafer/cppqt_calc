//
// Created by whyafer on 2023/8/15.
//

#ifndef CALCULATE_TEST_MIANCALC_H
#define CALCULATE_TEST_MIANCALC_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class miancalc; }
QT_END_NAMESPACE

class miancalc : public QWidget {
Q_OBJECT

public:
	explicit miancalc(QWidget *parent = nullptr);

	~miancalc() override;

private:
	Ui::miancalc *ui;
private slots:
	void on_buttons_clicked();
};


#endif //CALCULATE_TEST_MIANCALC_H
