#include<iostream> 
using namespace std; 

int main() { 
int x ;
cout<<"...............................................................................................................\n";
cout<<"                     HEAD         OFFICE          MANAGEMENT                    ";
cout<<"............................................................................................................................................\n";
cout<<"WELCOME TO OUR KALASALINGAM ACADEMIC SCIENCE AND EDUCATION    'head of details of faculties and students'  \n";
cout<<"............................................................................................................................................\n";
cout<<"1.give number'1'for faculty information \n";
cout<<"2.give number'2'for students details \n";
/*fAc*/
cin>>x; 
	switch (x) 
	{ 
		case 1:
			cout <<"Welcome to Kalasalingam faculty information portal \n";
			cout<<"select the department \n";
			cout<<"................................................................................................................................\n";
		cout<<"1.give number '1' to select cse department \n";
		cout<<"2.give number '2' to select ece department \n";
		cout<<"3.give number '3' to select mec department \n";
		cout<<"4.give number '4' to select eee department\n";
		cout<<"5.give number '5' to select civil department\n";
//fac information
		cin>>x;			
			switch (x) 
			{ 
				case 1:
				    cout<<"welcome to \t** C S E **\t department faculty portal\n";
					cout <<"HOD    : Bavesh \n";
					cout<<"DEAN    : Hemanth\n";
					cout<<"asst hod: Arshad \n";
					cout<<".....................................................................................................................\n";
// cse    fac					
					cout<<"give number '1' for hod,dean,asst hod information \n";
					cout<<"give number  '2'for profissors information\n";
					cout<<"give number'3' for assisstant professors information \n";
				 	cin>>x;			
			switch (x) 
			{ 
				case 1:
// cse head					
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   Bavesh       \t       HOD         \t        150000   \n";
					cout<<"   2    \t   HEMANTH      \t       DEAN        \t         89000   \n";
					cout<<"   3    \t   ARSHAD       \t   ASSISTANT HOD   \t         80000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................    .......................\n";
                    break; 
// cse profissors
				case 2: 
				    cout<<"cse department profissors";
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   sandhya      \t    profissor      \t        54000   \n";
					cout<<"   2    \t   abitha       \t    profissor      \t        50000   \n";
					cout<<"   3    \t   prakhash     \t    profissor      \t        47000   \n";
					cout<<"   4    \t   siri         \t    profissor      \t        54000   \n";
					cout<<"   5    \t   mahathma     \t    profissor      \t        50000   \n";
					cout<<"   6    \t   suresh       \t    profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n";
					break;
// cse asst profissors 
				case 3: 
					cout<<"cse department assistant profissors";
					cout<<"  sno   \t   Name         \t    designation              \t       salary  \n";
					cout<<"......  \t .............. \t  .................          \t  .......................\n";
					cout<<"   4    \t   niri         \t  assisstant  profissor      \t        54000   \n";
					cout<<"   5    \t   athma        \t  assisstant  profissor      \t        50000   \n";
					cout<<"   3    \t   rakhesh      \t  assisstant  profissor      \t        47000   \n";
					cout<<"   1    \t   sandilya     \t  assisstant  profissor      \t        41000   \n";
					cout<<"   2    \t   arha         \t  assisstant  profissor      \t        38000   \n";
					cout<<"   6    \t   Ramesh       \t  assisstant  profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n"; 
					break; 
				default: 
					cout << "Choiced other than 1, 2 and 3 press enter and run again"; 
					break; 
			} 
		    return 0;
// ece fac					 
				case 2: 
					cout<<"welcome to \t* E C E **\t department faculty portal\n";
					cout <<"HOD    :  Rama \n";
					cout<<"DEAN    :  salone \n";
					cout<<"asst hod:  Ravi   \n";
					cout<<".....................................................................................................................\n";
// ece    fac					
					cout<<"give number '1' for hod,dean,asst hod information \n";
					cout<<"give number  '2'for profissors information \n";
					cout<<"give number'3' for assisstant professors information \n";
				 	cin>>x;			
			switch (x) 
			{ 
				case 1:
// ece head					
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   Rama         \t       HOD         \t        150000   \n";
					cout<<"   2    \t   Salnre       \t       DEAN        \t         89000   \n";
					cout<<"   3    \t   Ravi         \t   ASSISTANT HOD   \t         80000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................    .......................\n";
                    break; 
// ece profissors
				case 2: 
				    cout<<"ece department profissors";
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   sandhya      \t    profissor      \t        54000   \n";
					cout<<"   2    \t   abitha       \t    profissor      \t        50000   \n";
					cout<<"   3    \t   prakhash     \t    profissor      \t        47000   \n";
					cout<<"   4    \t   siri         \t    profissor      \t        54000   \n";
					cout<<"   5    \t   mahathma     \t    profissor      \t        50000   \n";
					cout<<"   6    \t   suresh       \t    profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n";
					break; 
				case 3: 
					cout<<"ECE department assistant profissors";
					cout<<"  sno   \t   Name         \t    designation              \t       salary  \n";
					cout<<"......  \t .............. \t  .................          \t  .......................\n";
					cout<<"   4    \t   niri         \t  assisstant  profissor      \t        54000   \n";
					cout<<"   5    \t   athma        \t  assisstant  profissor      \t        50000   \n";
					cout<<"   3    \t   rakhesh      \t  assisstant  profissor      \t        47000   \n";
					cout<<"   1    \t   sandilya     \t  assisstant  profissor      \t        41000   \n";
					cout<<"   2    \t   arha         \t  assisstant  profissor      \t        38000   \n";
					cout<<"   6    \t   Ramesh       \t  assisstant  profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n"; 
					break; 
				default: 
					cout << "Choiced other than 1, 2 and 3 press enter and run again "; 
					break; 
			} 
		    return 0; 
				case 3: 
					cout<<"welcome to \t* M E C H **\t department faculty portal\n";
					cout <<"HOD    :  suresh \n";
					cout<<"DEAN    :  ramesh \n";
					cout<<"asst hod:  somesh   \n";
					cout<<".....................................................................................................................\n";
// Mech    fac					
					cout<<"give number '1' for hod,dean,asst hod information \n";
					cout<<"give number '2' for profissors information \n";
					cout<<"give number '3' for assisstant professors information \n";
				 	cin>>x;			
			switch (x) 
			{ 
				case 1:
// mech head					
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   suresh       \t       HOD         \t        150000   \n";
					cout<<"   2    \t   ramesh       \t       DEAN        \t         89000   \n";
					cout<<"   3    \t   SOMESH       \t   ASSISTANT HOD   \t         80000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................    .......................\n";
                    break; 
// mech profissors
				case 2: 
				    cout<<"mech department profissors";
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   4    \t   siri         \t    profissor      \t        54000   \n";
					cout<<"   5    \t   mahathma     \t    profissor      \t        50000   \n";
					cout<<"   6    \t   suresh       \t    profissor      \t        47000   \n"; 
					cout<<"   3    \t   prakhash     \t    profissor      \t        47000   \n";
					cout<<"   1    \t   sandhya      \t    profissor      \t        54000   \n";
					cout<<"   2    \t   abitha       \t    profissor      \t        50000   \n";
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n";
					break; 
				case 3: 
					cout<<"mech department assistant profissors";
					cout<<"  sno   \t   Name         \t    designation              \t       salary  \n";
					cout<<"......  \t .............. \t  .................          \t  .......................\n";
					cout<<"   3    \t   rakhesh      \t  assisstant  profissor      \t        47000   \n";
					cout<<"   1    \t   sandilya     \t  assisstant  profissor      \t        41000   \n";
					cout<<"   2    \t   arha         \t  assisstant  profissor      \t        38000   \n";
					cout<<"   5    \t   athma        \t  assisstant  profissor      \t        50000   \n";
					cout<<"   6    \t   Ramesh       \t  assisstant  profissor      \t        47000   \n"; 
					cout<<"   4    \t   niri         \t  assisstant  profissor      \t        54000   \n";
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n"; 
					break;	 
				default: 
					cout << "Choiced other than 1, 2 and 3 press enter and run again"; 
					break; 
			} 
		    return 0; 
			case 4:
			      	cout<<"welcome to \t* E E E **\t department faculty portal\n";
					cout <<"HOD    :  sai \n";
					cout<<"DEAN    :  ms dhoni \n";
					cout<<"asst hod:  kohli   \n";
					cout<<".....................................................................................................................\n";
// eee    fac					
					cout<<"give number '1' for hod,dean,asst hod information \n";
					cout<<"give number '2' for profissors information \n";
					cout<<"give number '3' for assisstant professors information \n";
				 	cin>>x;			
			switch (x) 
			{ 
				case 1:
// eee head					
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   sai          \t       HOD         \t        150000   \n";
					cout<<"   2    \t   ms dhoni     \t       DEAN        \t         89000   \n";
					cout<<"   3    \t   kohli        \t   ASSISTANT HOD   \t         80000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................    .......................\n";
                    break; 
// eee profissors
				case 2: 
				    cout<<"eee department profissors";
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
     				cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   6    \t   suresh       \t    profissor      \t        47000   \n"; 
					cout<<"   2    \t   abitha       \t    profissor      \t        50000   \n";
					cout<<"   1    \t   sandhya      \t    profissor      \t        54000   \n";
					cout<<"   3    \t   prakhash     \t    profissor      \t        47000   \n";
					cout<<"   4    \t   siri         \t    profissor      \t        54000   \n";
					cout<<"   5    \t   mahathma     \t    profissor      \t        50000   \n";
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n";
					break; 
				case 3: 
					cout<<"EEE department assistant profissors";
					cout<<"  sno   \t   Name         \t    designation              \t       salary  \n";
					cout<<"......  \t .............. \t  .................          \t  .......................\n";
					cout<<"   2    \t   arha         \t  assisstant  profissor      \t        38000   \n";
					cout<<"   5    \t   athma        \t  assisstant  profissor      \t        50000   \n";
					cout<<"   4    \t   niri         \t  assisstant  profissor      \t        54000   \n";
					cout<<"   3    \t   rakhesh      \t  assisstant  profissor      \t        47000   \n";
					cout<<"   1    \t   sandilya     \t  assisstant  profissor      \t        41000   \n";
					cout<<"   6    \t   Ramesh       \t  assisstant  profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n"; 
					break; 
				default: 
					cout << "Choiced other than 1, 2 and 3 press enter and run again "; 
					break; 
			} 
		    return 0;
			case 5:
			        cout<<"welcome to \t* CIVIL **\t department faculty portal\n";
					cout <<"HOD    :  viva \n";
					cout<<"DEAN    :  scoda \n";
					cout<<"asst hod:  maruthi   \n";
					cout<<".....................................................................................................................\n";
// civil    fac					
					cout<<"give number '1' for hod,dean,asst hod information \n";
					cout<<"give number  '2'for profissors information \n";
					cout<<"give number'3' for assisstant professors information \n";
				 	cin>>x;			
			switch (x) 
			{ 
				case 1:
// civil head					
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   viva         \t       HOD         \t        150000   \n";
					cout<<"   2    \t   scoda        \t       DEAN        \t         89000   \n";
					cout<<"   3    \t   maruthi      \t   ASSISTANT HOD   \t         80000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................    .......................\n";
                    break; 
// civil profissors
				case 2: 
				    cout<<"civil department profissors";
					cout<<"  sno   \t   Name         \t    designation    \t       salary  \n";
					cout<<"......  \t .............. \t  .................\t  .......................\n";
					cout<<"   1    \t   sandhya      \t    profissor      \t        54000   \n";
					cout<<"   2    \t   abitha       \t    profissor      \t        50000   \n";
					cout<<"   3    \t   prakhash     \t    profissor      \t        47000   \n";
					cout<<"   4    \t   siri         \t    profissor      \t        54000   \n";
					cout<<"   5    \t   mahathma     \t    profissor      \t        50000   \n";
					cout<<"   6    \t   suresh       \t    profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n";
					break; 
				case 3: 
					cout<<"civil department assistant profissors";
					cout<<"  sno   \t   Name         \t    designation              \t       salary  \n";
					cout<<"......  \t .............. \t  .................          \t  .......................\n";
					cout<<"   4    \t   niri         \t  assisstant  profissor      \t        54000   \n";
					cout<<"   5    \t   athma        \t  assisstant  profissor      \t        50000   \n";
					cout<<"   3    \t   rakhesh      \t  assisstant  profissor      \t        47000   \n";
					cout<<"   1    \t   sandilya     \t  assisstant  profissor      \t        41000   \n";
					cout<<"   2    \t   arha         \t  assisstant  profissor      \t        38000   \n";
					cout<<"   6    \t   Ramesh       \t  assisstant  profissor      \t        47000   \n"; 
					cout<<"........   *EXIT*...............    *  EXIT  *............... ................    .......................\n"; 
					break; 
				default: 
					cout << "Choiced other than 1, 2 and 3 press enter and run again "; 
					break; 
			} 
		    return 0;   
				default: 
					cout << "Choiced other than 1, 2, 3,4 and 5 press enter and run again  "; 
					break; 
			} 
		    return 0;
	// student
	
	
	
	case 2: 
	        cout<<"..........................STUDENT PORTAL .................................................\n";
        	cout <<"welcome to students details portal \n";
			cout<<"select the department \n"; 
	      	cout<<"......................................................................................................................\n";
	// student sub
	
	
	
		cout<<"1.give number '1' to select cse department \n";
		cout<<"2.give number '2' to select ece department \n";
		cout<<"3.give number '3' to select mec department \n";
		cout<<"4.give number '4' to select eee department\n";
		cout<<"5.give number '5' to select civil department\n";
		cin>>x;			
			switch (x) 
			{ 
// cse student 
				case 1:
				    cout<<"welcome to cse department student portal\n";
					cout <<"HOD     : Bavesh \n";
					cout<<"DEAN     : hemanth \n";
					cout<<"asst hod : Arshad \n";
//cse stud
					cout<<".........................CSE DEPARTMENT STUDENTS ..........................................................\n";
					cout<<"  register number   \t   Name         \t         CGPA      \t       fee/annual  \n";
					cout<<"................    \t .............. \t  .................\t  .......................\n";
					cout<<"   10001            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10002            \t   arha         \t          9.2      \t        50000   \n";
					cout<<"   10003            \t   chinta       \t          6.42     \t        100000   \n";
					cout<<"   10004            \t   rahul        \t          7.24     \t        100000   \n";
					cout<<"   10005            \t   shiva        \t          8.7      \t        75000   \n";
					cout<<"   10006            \t   sushanth     \t          9.32     \t        50000   \n";
					cout<<"   10007            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10008            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10009            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10010            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10011            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10012            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10013            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10014            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10015            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10016            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10017            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10018            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10019            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10020            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10021            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10022            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10023            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10024            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10025            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10026            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10027            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10028            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10029            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10030            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10031            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10032            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10033            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   10034            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................  ...................\n";
					break; 
				case 2: 
					cout<<"welcome to \t* E C E **\t department faculty portal\n";
					cout <<"HOD    :  Rama \n";
					cout<<"DEAN    :  salone \n";
					cout<<"asst hod:  Ravi   \n";
					cout<<".....................................................................................................................\n";
//ece stud
					cout<<".........................ECE DEPARTMENT STUDENTS ..........................................................\n";
					cout<<"  register number   \t   Name         \t         CGPA      \t       fee/annual  \n";
					cout<<"................    \t .............. \t  .................\t  .......................\n";
					cout<<"   20001            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20002            \t   arha         \t          9.2      \t        50000   \n";
					cout<<"   20003            \t   chinta       \t          6.42     \t        100000   \n";
					cout<<"   20004            \t   rahul        \t          7.24     \t        100000   \n";
					cout<<"   20005            \t   shiva        \t          8.7      \t        75000   \n";
					cout<<"   20006            \t   sushanth     \t          9.32     \t        50000   \n";
					cout<<"   20007            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20008            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20009            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20010            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20011            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20012            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20013            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20014            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20015            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20016            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20017            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20018            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20019            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20020            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20021            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20022            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20023            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20024            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20025            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20026            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   20027            \t   Bhgyuf       \t          8.2      \t        75000   \n";
					cout<<"   20028            \t   utufyi       \t          8.2      \t        75000   \n";
					cout<<"   20029            \t   rstrki       \t          8.2      \t        75000   \n";
					cout<<"   20030            \t   kjhhkj       \t          8.2      \t        75000   \n";
					cout<<"   20031            \t   Bavesh       \t          5.2      \t       100000   \n";
					cout<<"   20032            \t   Bavoih       \t          7.2      \t        90000   \n";
					cout<<"   20033            \t   hgjhsh       \t          6.2      \t       100000   \n";
					cout<<"   20034            \t   Byfuyj       \t          6.2      \t       100000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................   .................\n";
					break;  
				 
				case 3: 
					cout<<"welcome to \t* M E C H **\t department faculty portal\n";
					cout <<"HOD    :  suresh \n";
					cout<<"DEAN    :  ramesh \n";
					cout<<"asst hod:  somesh   \n";
					cout<<".....................................................................................................................\n"; 
//mech stude
                    cout<<".........................MECH  DEPARTMENT STUDENTS ..........................................................\n";
					cout<<"  register number   \t   Name         \t         CGPA      \t       fee/annual  \n";
					cout<<"................    \t .............. \t  .................\t  .......................\n";
					cout<<"   30001            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30002            \t   arha         \t          9.2      \t        50000   \n";
					cout<<"   30003            \t   chinta       \t          6.42     \t        100000   \n";
					cout<<"   30004            \t   rahul        \t          7.24     \t        100000   \n";
					cout<<"   30005            \t   shiva        \t          8.7      \t        75000   \n";
					cout<<"   30006            \t   sushanth     \t          9.32     \t        50000   \n";
					cout<<"   30007            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30008            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30009            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30010            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30011            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30012            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30013            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30014            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30015            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30016            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30017            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30018            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30019            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30020            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30021            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30022            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30023            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30024            \t   Bavesh       \t          8.6      \t        50000   \n";
					cout<<"   30025            \t   Bavesh       \t          8.9      \t        50000   \n";
					cout<<"   30026            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   30027            \t   Bavesh       \t          8.8      \t        75000   \n";
					cout<<"   30028            \t   avibgy       \t          8.5      \t        75000   \n";
					cout<<"   30029            \t   Bavesh       \t          8.6      \t        75000   \n";
					cout<<"   30030            \t   giuhkh       \t          8.3      \t        75000   \n";
					cout<<"   30031            \t   Bauihy       \t          8.4      \t        75000   \n";
					cout<<"   30032            \t   Bafutg       \t          7.9      \t        90000   \n";
					cout<<"   30033            \t   tfdyuh       \t          6.7      \t       100000   \n";
					cout<<"   30034            \t   trddht       \t          4.5      \t       100000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................   ................\n";
					break; 				
				case 4:
				    cout<<"welcome to \t* E E E **\t department faculty portal\n";
					cout <<"HOD    :  sai \n";
					cout<<"DEAN    :  ms dhoni \n";
					cout<<"asst hod:  kohli   \n"; 
					cout<<".....................................................................................................................\n"; 
//EEE Stude
                    cout<<".........................EEE DEPARTMENT STUDENTS ..........................................................\n";
					cout<<"  register number   \t   Name         \t         CGPA      \t       fee/annual  \n";
					cout<<"................    \t .............. \t  .................\t  .......................\n";
					cout<<"   40001            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40002            \t   arha         \t          9.2      \t        50000   \n";
					cout<<"   40003            \t   chinta       \t          6.42     \t        100000   \n";
					cout<<"   40004            \t   rahul        \t          7.24     \t        100000   \n";
					cout<<"   40005            \t   shiva        \t          8.7      \t        75000   \n";
					cout<<"   40006            \t   sushanth     \t          9.32     \t        50000   \n";
					cout<<"   40007            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40008            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40009            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40010            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40011            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40012            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40013            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40014            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40015            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40016            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40017            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40018            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40019            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40020            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40021            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40022            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40023            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40024            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40025            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40026            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40027            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40028            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40029            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40030            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40031            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40032            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40033            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   40034            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................   ..............\n";
					break; 				
				case 5:
					cout<<"welcome to \t* CIVIL **\t department faculty portal\n";
					cout <<"HOD    :  viva \n";
					cout<<"DEAN    :  scoda \n";
					cout<<"asst hod:  maruthi   \n";
					cout<<"............................................................................................\n";
// Civil students 	
                    cout<<".........................CIVIL DEPARTMENT STUDENTS ........................................\n";
					cout<<"  register number   \t   Name         \t         CGPA      \t       fee/annual  \n";
					cout<<"................    \t .............. \t  .................\t  .......................\n";
					cout<<"   50001            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50002            \t   arha         \t          9.2      \t        50000   \n";
					cout<<"   50003            \t   chinta       \t          6.42     \t        100000   \n";
					cout<<"   50004            \t   rahul        \t          7.24     \t        100000   \n";
					cout<<"   50005            \t   shiva        \t          8.7      \t        75000   \n";
					cout<<"   50006            \t   sushanth     \t          9.32     \t        50000   \n";
					cout<<"   50007            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50008            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50009            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50010            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50011            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50012            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50013            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50014            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50015            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50016            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50017            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50018            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50019            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50020            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50021            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50022            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50023            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50024            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50025            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50026            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50027            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50028            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50029            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50030            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50031            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50032            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50033            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"   50034            \t   Bavesh       \t          8.2      \t        75000   \n";
					cout<<"........   * EXIT *...............    *EXIT  *............... ................   ...............\n";
					break; 
					cout<<".......................................................................................\n";
					cout<<".............................................................................................\n";			
				default: 
					cout << "Choiced other than 1, 2, 3,4 and 5 press enter and run again"; 
					break; 
			} 
		    return 0;	
				 
		default: 
			cout << "Choiced other than 1 and 2 press enter and run again"; 
			break; 
	} 
return 0; 
}
