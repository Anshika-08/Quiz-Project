#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
struct student{
    char name[20],roll[20];
    int marks,random;
};
student st;
void cpp(){
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<5)
    {
        back:
    st.random=rand()%5;
    for(int j=0;j<=4;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }
    arr[i]=st.random;
    switch(st.random)
    {
        case 0:
    cout<<i+1<<")What is a correct syntax to output \"Hello World\" in C++?"<<endl;
    cout<<"A. System.out.println(\"Hello world\");"<<endl;
    cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;
    cout<<"C. print(\"Hello world\");"<<endl;
    cout<<"D. cout<<\"Hello world\";"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
        cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is d"<<endl;
    }
    break;
    case 1:
    cout<<i+1<<")Which of the following is called address operator?"<<endl;
    cout<<"A. *"<<endl;
	cout<<"B. &"<<endl;
	cout<<"C. _"<<endl;
	cout<<"D. %"<<endl;
	choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is b"<<endl;
    }
    break;
    case 2:
    cout<<i+1<<")Which of the following is used for comments in C++?"<<endl;
	cout<<"A. // comment"<<endl;
	cout<<"B. /* comment */"<<endl;
	cout<<"C. both // comment or /* comment */"<<endl;
	cout<<"D. // comment */"<<endl;
	choice=getch();
	if(choice=='C'||choice=='c'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is c"<<endl;
	}
    break;
    case 3:
    cout<<i+1<<")Who invented C++?"<<endl;
	cout<<"A. Bjarne Stroustrup"<<endl;
	cout<<"B. Ken Thompson"<<endl;
	cout<<"C. Brian Kernighan"<<endl;
	cout<<"D. Dennis Ritchie"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is a"<<endl;
	}
    break;
    case 4:
    cout<<i+1<<")Which is more effective while calling the C++ functions?"<<endl;
	cout<<"A. call by object"<<endl;
	cout<<"B. call by pointer"<<endl;
	cout<<"C. call by value"<<endl;
	cout<<"D. call by reference"<<endl;
	choice=getch();
	if(choice=='D'||choice=='d'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is d"<<endl;
	}
    break;
    }
    i++;
}
}
void java(){
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<5)
    {
        back:
    st.random=rand()%5;
    for(int j=0;j<=4;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }
    arr[i]=st.random;
    switch(st.random)
    {
        case 0:
    cout<<i+1<<")What is the extension of java code files?"<<endl;
    cout<<"A. .js"<<endl;
    cout<<"B. .txt"<<endl;
    cout<<"C. .class"<<endl;
    cout<<"D. .java"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
        cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is d"<<endl;
    }
    break;
    case 1:
    cout<<i+1<<")Which of the following is a type of polymorphism in Java Programming?"<<endl;
    cout<<"A. Multiple polymorphism"<<endl;
	cout<<"B. Compile time polymorphism"<<endl;
	cout<<"C. Multilevel polymorphism"<<endl;
	cout<<"D. Execution time polymorphism"<<endl;
	choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is b"<<endl;
    }
    break;
    case 2:
    cout<<i+1<<")Who invented Java Programming?"<<endl;
	cout<<"A. Guido van Rossum"<<endl;
	cout<<"B. Dennis Ritchie"<<endl;
	cout<<"C. James Gosling"<<endl;
	cout<<"D. Bjarne Stroustrup"<<endl;
	choice=getch();
	if(choice=='C'||choice=='c'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is c"<<endl;
	}
    break;
    case 3:
    cout<<i+1<<")Which component is used to compile, debug and execute the java programs?"<<endl;
	cout<<"A. JDK"<<endl;
	cout<<"B. JRE"<<endl;
	cout<<"C. JIT"<<endl;
	cout<<"D. JVM"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is a"<<endl;
	}
    break;
    case 4:
    cout<<i+1<<")Which of these cannot be used for a variable name in Java?"<<endl;
	cout<<"A. identifier & keyword"<<endl;
	cout<<"B. identifier"<<endl;
	cout<<"C. keyword"<<endl;
	cout<<"D. none of the mentioned"<<endl;
	choice=getch();
	if(choice=='C'||choice=='c'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is c"<<endl;
	}
    break;
    }
    i++;
}
}
void html(){
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<5)
    {
        back:
    st.random=rand()%5;
    for(int j=0;j<=4;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }
    arr[i]=st.random;
    switch(st.random)
    {
        case 0:
    cout<<i+1<<")HTML stands for __________"<<endl;
    cout<<"A. HyperText Markup Language"<<endl;
    cout<<"B. HyperText Machine Language"<<endl;
    cout<<"C. HyperText Marking Language"<<endl;
    cout<<"D. HighText Marking Language"<<endl;
    choice=getch();
    if(choice=='A'||choice=='a'){
        cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is a"<<endl;
    }
    break;
    case 1:
    cout<<i+1<<")What is the correct syntax of doctype in HTML5?"<<endl;
    cout<<"A. </doctype html>"<<endl;
	cout<<"B. <!doctype html>"<<endl;
	cout<<"C. <doctype html>"<<endl;
	cout<<"D. <doctype html!>"<<endl;
	choice=getch();
	if(choice=='B'||choice=='b'){
		cout<<"Your answer is correct"<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is b"<<endl;
    }
    break;
    case 2:
    cout<<i+1<<")Which of the following tag is used for inserting the largest heading in HTML?"<<endl;
	cout<<"A. head"<<endl;
	cout<<"B. <h6>"<<endl;
	cout<<"C. <h1>"<<endl;
	cout<<"D. heading"<<endl;
	choice=getch();
	if(choice=='C'||choice=='c'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is c"<<endl;
	}
    break;
    case 3:
    cout<<i+1<<")How do we write comments in HTML?"<<endl;
	cout<<"A. <!……>"<<endl;
	cout<<"B. </…….>"<<endl;
	cout<<"C. </……/>"<<endl;
	cout<<"D. <…….!>"<<endl;
	choice=getch();
	if(choice=='A'||choice=='a'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is a"<<endl;
	}
    break;
    case 4:
    cout<<i+1<<")Which element is used for or styling HTML5 layout?"<<endl;
	cout<<"A. jQuery"<<endl;
	cout<<"B. JavaScript"<<endl;
	cout<<"C. keyword"<<endl;
	cout<<"D. CSS"<<endl;
	choice=getch();
	if(choice=='D'||choice=='d'){
		cout<<"Your answer is correct"<<endl;
		st.marks++;
	}
	else{
		cout<<"Your answer is incorrect"<<endl;
        cout<<"Correct Answer is d"<<endl;
	}
    break;
    }
    i++;
}
}
void result(){
    int per=0;
    cout<<"Student Name: "<<st.name<<endl;
    cout<<"Roll no: "<<st.roll<<endl;
    cout<<"Marks: "<<st.marks<<" out of 5"<<endl;
    per=100*st.marks/5;
    cout<<"Percentage: "<<per<<"%"<<endl;
    if(per>=50){
        cout<<"Status: Pass"<<endl;
    }
    else{
        cout<<"Status: Fail"<<endl;
    }
}
main() {
    char press,select;
    do{
        system("CLS");
        cout<<"\n\n\t\t****************"<<endl;
        cout<<"\t\t   QUIZ PROJECT  "<<endl;
        cout<<"\t\t****************"<<endl;
        cout<<"\t\tEnter name: ";
        gets(st.name);
        cout<<"\t\tRoll no: ";
        gets(st.roll);
        system("CLS");
        cout<<"\t\tMarks less than 50% will be fail"<<endl;
        cout<<"Select which subject quiz you want to perform"<<endl;
        cout<<"1) C++"<<endl;
        cout<<"2) Java"<<endl;
        cout<<"3) Html"<<endl;
        select=getch();
        system("CLS");
        switch(select){
            case '1':
                cout<<"\t\tC++ Quiz"<<endl;
                cpp();
                system("CLS");
                cout<<"\t\tC++ Quiz Result"<<endl;
                result();
                break;
            case '2':
                cout<<"\t\tJava Quiz"<<endl;
                java();
                system("CLS");
                cout<<"\t\tJava Quiz Result"<<endl;
                result();
                break;
            case '3':
                cout<<"\t\tHtml Quiz"<<endl;
                html();
                system("CLS");
                cout<<"\t\tHtml Quiz Result"<<endl;
                result();
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;

        }

        cout<<"Press y to continue or any key to terminate"<<endl;
        press=getch();
        system("CLS");
    }while(press=='y'||press=='Y');

}