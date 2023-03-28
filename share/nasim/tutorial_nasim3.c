#include <stdio.h>

int main() {
	int money, note500, note100, note50, note10, note5, note1, remainingMoney;
	scanf("%d", &money);

	// For 500
	note500 = money/500;
	remainingMoney = money - (note500 * 500);

	// For 100
	note100 = remainingMoney/100;
	remainingMoney = remainingMoney - (note100 * 100);

	// For 50
	note50 = remainingMoney/50;
	remainingMoney = remainingMoney - (note50 * 50);

	// For 10
	note10 = remainingMoney/10;
	remainingMoney = remainingMoney - (note10 * 10);

	// For 5
	note5 = remainingMoney/5;
	remainingMoney = remainingMoney - (note5 * 5);

	// For 1
	note1 = remainingMoney/1;
	//remainingMoney = remainingMoney - (note1 * 1);

	printf("%d note(s) of 500\n"
			"%d note(s) of 100\n"
			"%d note(s) of 50\n"
			"%d note(s) of 10\n"
			"%d note(s) of 5\n"
			"%d note(s) of 1\n", note500, note100, note50, note10, note5, note1);
	return 0;
}
