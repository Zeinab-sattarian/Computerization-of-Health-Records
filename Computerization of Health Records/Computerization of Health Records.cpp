#include<iostream>
#include<math.h>
using namespace std;
class HealthProfile {
public:
	HealthProfile(string fn, string ln, int d, int m, int y, float w, float h, string
		g) { // class' conctructor
		setFirstName(fn);
		setLastName(ln);
		setDay(d);
		setMonth(m);
		setYear(y);
		setAge(y);
		setMaxHeartRate(age);
		setTargetHeartRateMin(maxHeartRate);
		setTargetHeartRateMax(maxHeartRate);
		setWeight(w);
		setHeight(h);
		setGender(g);
		setBMI(h, w);
		getChart();
		getDetermine(BMI);
	}
	void setFirstName(string fn) { // setting and getting data...
		firstName = fn;
	}
	void setLastName(string ln) {
		lastName = ln;
	}
	void setDay(int d) {
		day = d;
	}
	void setMonth(int m) {
		month = m;
	}
	void setYear(int y) {
		year = y;
	}
	string getFirstName() {
		return firstName;
	}
	string getLastName() {
		return lastName;
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
	void setAge(int y) { //calculating the user's age
		age = 2021 - y;
	}
	int getAge() {
		return age;
	}
	void setMaxHeartRate(int age) { //calculating user's maximum heart rate
		maxHeartRate = 220 - age;
	}
	int getMaxHeartRate() {
		return maxHeartRate;
	}
	void setTargetHeartRateMin(int maxHeartRate) { //calculating user's target heart rate minimum
			targetHeartRateMin = (50 * maxHeartRate) / 100;
	}
	void setTargetHeartRateMax(int maxHeartRate) { //calculating user's target heart rate maximum
			targetHeartRateMax = (85 * maxHeartRate) / 100;
	}
	float getTargetHeartRateMin() {
		return targetHeartRateMin;
	}
	float getTargetHeartRateMax() {
		return targetHeartRateMax;
	}
	void setHeight(float h) {
		height = h;
	}
	float getHeight() {
		return height;
	}
	void setWeight(float w) {
		weight = w;
	}
	float getweight() {
		return weight;
	}
	void setGender(string g) {
		gender = g;
	}
	string getGender() {
		return gender;
	}
	void setBMI(float height, float weight) { //calculating BMI 
			BMI = float((weight * 703) / (pow(height, 2)));
	}
	float getBMI() {
		return BMI;
	}
	void getChart() { // a method for printing the BMI chart
		cout << " ---------------------------------" << endl;
		cout << " |BMI VALUES: " << " |" << endl;
		cout << " |Underweight: " << "less than 18.5 |" << endl;
		cout << " |Normal: " << "between 18.5 and 24.9 |" << endl;
		cout << " |Overweight: " << "between 25 and 29.9 |" << endl;
		cout << " |Obese: " << "30 or greater |" << endl;
		cout << " ---------------------------------" << endl;
	}
	void getDetermine(float BMI) {
		if (BMI < 18.5) {
			cout << " you are Underweight" << endl;
		}
		if (BMI < 24.9) {
			if (BMI > 18.5) {
				cout << " you are Normal" << endl;
			}
		}
		if (BMI < 29.9) {
			if (BMI > 24.9) {
				cout << " you are Overweight" << endl;
			}
		}
		if (BMI > 29.9) {
			cout << " you are Obese" << endl;
		}
	}
private:
	string firstName, lastName, gender; //declaring and initializing data members
		int day, month, year, age{ 0 }, maxHeartRate{ 0 };
	float targetHeartRateMin{ 0 }, targetHeartRateMax{ 0 }, height{ 0 }, weight{ 0 },
		BMI{ 0 };
};
int main()
{
	string fn, ln, g;
	int d, m, y;
	float h = 0, w = 0; //prompting user for personal information and storing them
		cout << "please enter your first and last name:" << endl;
	cin >> fn >> ln;
	cout << "please enter the date of your birth in this format dd mm yy:" << endl;
	cin >> d >> m >> y;
	cout << "please enter your weight in pounds:" << endl;
	cin >> w;
	cout << "please enter your height in inches:" << endl;
	cin >> h;
	cout << "please enter your gender:" << endl;
	cin >> g;
	cout << endl << ".....................Creating your Health profile..........................." << endl << endl;;
		HealthProfile hp(fn, ln, d, m, y, w, h, g);
	// creating class object 
	cout << "your first name is: " << hp.getFirstName() << " " << hp.getLastName() <<
		endl; //printing all the stored information
	cout << "your gender is " << hp.getGender() << endl;
	cout << "your date of birth is: " << hp.getDay() << "/" << hp.getMonth() << "/" <<
		hp.getYear() << endl;
	cout << "your age is: " << hp.getAge() << endl;
	cout << "your weight is " << hp.getweight() << " lbs" << endl;
	cout << "your height is " << hp.getHeight() << " inches" << endl;
	cout << "your BMI is: " << hp.getBMI() << endl;
	//user's target heart rate is something from 50% to 85% of their maximum heart beat
		cout << "your target heart rate is between " << hp.getTargetHeartRateMin() << " and " << hp.getTargetHeartRateMax() << endl;
		cout << "your maximum heart rate is: " << hp.getMaxHeartRate() << endl;
}

