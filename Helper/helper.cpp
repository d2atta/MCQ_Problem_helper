#include<iostream>
using namespace std;
struct q
{
	char givenans;
	char corrans;
};
int main(){
	float total_correct = 0,total_questions = 0;
	cout<<"Your Problem solving Session starts now...\n";
	while(1)
	{
		float n,start;
		cout<<"\nEnter the number of questions and the starting question number:";
		cin>>n>>start;
		total_questions+=n;
		q ans[(int)n];
		cout<<"Enter your responses:"<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<start+i<<")";
			cin>>ans[i].givenans;
		}
		cout<<"\nEnter the correct ans:\n";
		for (int i = 0; i < n; ++i)
		{
			cout<<start+i<<")";
			cin>>ans[i].corrans;
		}
		float correct = 0;
		cout<<"Q   \t Given\t  Correct     Judgement"<<endl;
		for (int i = 0; i < n; ++i)
		{
			string pass=ans[i].corrans==ans[i].givenans?"Pass":"Fail";
			if(pass == "Pass")
				correct++;
			cout<<"#"<<start+i<<"         "<<ans[i].givenans<<"         "<<ans[i].corrans<<"           "<<pass<<endl;;
		}
		cout<<"\n\n\n\n---Statistics---\nCorrect ans:"<<correct<<"\nWrong ans:"<<n-correct<<"\nPercentage:"<<(correct/n)*100<<"%\n";
		total_correct+=correct;
		char c;
		cout<<"Do u want to do it again(y/n):";
		cin>>c;
		if(c=='n')
			break;
		if(c!='y'){
			cout<<"\ninvalid input...Closing....\n";
			break;
		}
	}
	cout<<"\n\n\n\n---Statistics of your Session---\nCorrect ans:"<<total_correct<<"\nWrong ans:"<<total_questions-total_correct<<"\nPercentage:"<<(total_correct/total_questions)*100<<"%\n";
	return 0;
}