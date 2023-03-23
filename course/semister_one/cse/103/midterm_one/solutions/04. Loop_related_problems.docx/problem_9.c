#include <stdio.h>

int main() {

	int n;
	const double AT = 5.00, HWT = 10.00, CTT = 15.00, MTT = 50.00, TFT = 100.00;
	const double AP = 5.00, HWP = 10.00, CTP = 15.00, MTP = 30.00, TFP = 40.00;

	scanf("%d", &n);

	double as[n], hws[n], cts[n], mts[n], tfs[n], totals[n], marks[n];
	char* grades[n];

	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf", &as[i], &hws[i], &cts[i], &mts[i], &tfs[i]);

		//totals[i] = (as[i] * (AP/100.0)) + (hws[i] * (HWP/100.0)) + (cts[i] * (CTP/100.0)) + (mts[i] * (MTP/100.0)) + (tfs[i] * (TFP/100.0));
        
		totals[i] = as[i] + hws[i] + cts[i] + mts[i] + tfs[i];
		marks[i] = (totals[i]/(AT+HWT+CTT+MTT+TFT))*100.00;

		if (marks[i] >= 90 && marks[i] <= 100) {
			grades[i] = "A";
		} else if (marks[i] >= 86) {
			grades[i] = "A-";
		} else if (marks[i] >= 82) {
			grades[i] = "B+";
		} else if (marks[i] >= 78) {
			grades[i] = "B";
		} else if (marks[i] >= 74) {
			grades[i] = "B-";
		} else if (marks[i] >= 70) {
			grades[i] = "C+";
		} else if (marks[i] >= 66) {
			grades[i] = "C";
		} else if (marks[i] >= 62) {
			grades[i] = "C-";
		} else if (marks[i] >= 58) {
			grades[i] = "D+";
		} else if (marks[i] >= 55) {
			grades[i] = "D";
		} else if (marks[i] >= 0 && marks[i] < 55) {
			grades[i] = "F";
		} else {
			grades[i] = "Invalid";
		}
	}

	for (int i = 0; i < n; i++) {
		printf("Student %d: %s\n", i+1, grades[i]);
	}

	return 0;

} //main