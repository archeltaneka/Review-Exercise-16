#include <iostream>
using namespace std;

// creates TestScores class
class TestScores{
	private:
		double score;
	public:
		// declares exception class
		class InvalidScore{};
		
		// default constructor
		TestScores()
		{
			score = 0.0;
		}
		
		// constructor 2
		TestScores(double score)
		{
			if(score < 0 || score > 100)
			{
				throw InvalidScore();
			} else {
				this->score = score;
			}
		}
		
		// set score
		void setScore(double s)
		{
			score = s;
		}
		
		// get score
		double getScore() const
		{
			return score;
		}
};

// main function
int main(){
	
	// declares variables
	const int NUM_SCORE = 5;
	//double scores[NUM_SCORE] = {97, 88, 63, 100, 103};
	
	try{
		// creates TestScores object
		TestScores student[NUM_SCORE] = {TestScores(98), TestScores(87), TestScores(75), TestScores(100), TestScores(103)};
	}
	catch(TestScores::InvalidScore)
	{
		cout << "Invalid score! Must between 0-100!";
	}
	
	
	
	
	return 0;
	
}
