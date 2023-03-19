#include <iostream> //cout
#include <cstring>	//string
#include <cmath>	//match
#include <iomanip>	//convert at setw
#include <cstdlib>	//wala pa
#include <cctype>	//singler char
#include <windows.h> //sleep
#include <sstream>	//string stream for convertion of string to integer
#include <fstream>  //to get the file chu chu
using namespace std;


//class section
class header
{
public:
	void borders(string title)
	{
	int ascii_code[6] = {201, 200, 187, 188, 205, 186};
	char s[6];
	for(int i = 0; i < 6; i++)
	{
		s[i] = ascii_code[i];
	}
	cout<<"\t\t"<<s[0]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[2]<<endl
		<<"\t\t"<<s[5]<<ctrtle(title)<<s[5]<<endl
		<<"\t\t"<<s[1]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[4]<<s[3]<<endl;
	}
private:
	string ctrtle(string tle)
	{
	int length(0), netspace(0), hlvspc(0);
	string title;
	length = tle.length();
	netspace = 50 - (length+1);
	hlvspc = floor(netspace/2);
	
	for(int x(0); x<=hlvspc; x++)
		{
		title = title + " ";
		}
	title = title + tle;
	
	if((length%2) == 0)
	{
		for(int y(0); y<hlvspc+1; y++)
		{
		title = title + " ";
		}
	}
	
	else
	{
		for(int y(0); y<hlvspc; y++)
		{
			title = title +" ";
		}
	}
	
	return title;
	}
}title;

class ascii
{
	private:
		char chartrans[255];
		int iii;
		//int transfer[255];
		string s;
	
	public:
		string character (int inputcode)
		{
			for(iii = 0; iii < 255; iii++)
			{
				//cout<<transfer[iii]<<"\t";
				chartrans[iii] = iii+1;
				//cout<<chartrans[iii]<<endl;
				s = chartrans[iii];
				if (inputcode == iii+1)
				{
					break;
				}
				
			}
			return s;
		}
} code;

class valuegenerate
{
	public:
		int value()
		{
			int eger;
			eger = rand() % 300 + 10;
			return eger;
		}
		int id()
		{
			int imidate;
			imidate = rand() % 99999 + 202000000;
			return imidate;
		}
}*random;

class inputerror
{
	public:
		int ercde(int error_check);
		void ermsg(int error_type)
		{
			if(error_type == 1)
			{
				cout<<"\t|ERROR! Invalid Input.\n";
			}
			else if(error_type == 2)
			{
				cout<<"\t|ERROR! Only Accept (- , .) and Alphabet.\n";
			}
			else if(error_type == 3)
			{
				cout<<"\t|ERROR! No more than 34 characters.\n";
			}
			else if(error_type == 4)
			{
				cout<<"\t|ERROR! Only Accept (- , .) and Alphabet, and No more than 34 characters.\n";
			}
			else if(error_type == 5)
			{
				cout<<"\t|Error! An input is required.\n";
			}
			else if(error_type == 6)
			{
				cout<<"\t|Error! Only accept numbers and no more than 3 digit number.\n";
			}
			else if(error_type == 7)
			{
				cout<<"\t|Error! Input only m or f.\n";
			}
			else if(error_type == 8)
			{
				cout<<"\t|Error! Input valid age.\n";
			}
			else if(error_type == 9)
			{
				cout<<"\t|Error! Input valid weight.\n";
			}
			else if (error_type == 10)
			{
				cout<<"\t|Error! Input valid height.\n";
			}
			else if (error_type == 11)
			{
				cout<<"\t|Error! Alphanumeric and , . - # are only accepted.\n";
			}
			else if (error_type == 12)
			{
				cout<<"\t|Error! No more than 50 characters.\n";
			}
			else if (error_type == 13)
			{
				cout<<"\t|Error! Numbers and , . - # only.\n";
			}
			else if (error_type == 14)
			{
				cout<<"\t|Error! No more than 10 characters.\n";
			}
			else if (error_type == 15)
			{
				cout<<"\t|Error! Invalid Date.\n";
			}
			else if (error_type == 16)
			{
				cout<<"\t|Error! Only Accepts 9 Digit Number.\n";
			}
			else if (error_type == 17)
			{
				cout<<"\t|Error! ID number is in the database already.\n";
			}
			else if (error_type == 18)
			{
				cout<<"\t|Error! Invalid ID number.\n";
			}
			else if (error_type == 19)
			{
				cout<<"\t|Error! Input only 1 digit. Example '2' if 2nd year.\n";
			}
		}
}error;

int run(1); //to check one time initialization
int Mrun(1); //to activate object pick1
class PICK1
{
	private:
		int noderp, idnumrp, lastnamerp, firstnamerp, middlenamerp, fullnamerp, SYrp, agerp, genderrp, weightrp, heightrp, bdrp, cpnumrp, addressrp, MedicalHisrp, FamMedHisrp, MedHisrp, TreatHisrp, MedDirrp, nodeFrp;
		void repeat(int onetimerun);
		void node_creation(int repeat);
		void store_idnumber (int repeat);
		void store_lastname(int repeat);
		void store_firstname (int repeat);
		void store_middlename (int repeat);
		void store_fullname (int repeat);
		void store_schoolyear (int repeat);
		void store_age (int repeat);
		void store_gender (int repeat);
		void store_birthday (int repeat);
		void store_cellphonenum (int repeat);
		void store_weight (int repeat);
		void store_height (int repeat);
		void store_address (int repeat);
		void store_healthinpt0 (int repeat);
		void store_healthinpt1 (int repeat);
		void store_healthinpt2 (int repeat);
		void store_healthinpt3 (int repeat);
		void store_healthinpt4 (int repeat);
		void node_finisher(int repeat); 
	public:
		void textcheck (char text[200], int type);
		void ui();
}pick1;

class PICK2
{
	private:
		void norecords();
		void showrecords();
	public:
		void ui();
		
}pick2;

int Srun(1);// search run
class PICK3
{
	private:
		string Stext;
		string Htext;
		string Hchoice;
		int goback1;
		int goback2;
		int goback3;
		int result, holder[1000];
		void norecords();
		void listoption();
		void S_name();
		int S_optrun;
		void S_idnum();
		void S_address();
		void S_age();
		void S_gender();
		void S_delete(int type);
		void S_earch(string text, int type);
	public:
		void ui();
}pick3;

class FHand
{
	private:
		ifstream Fview;
		ofstream Fedit;
		ofstream Fstore;
		fstream Freboot;
	public:
		void LoadFiles();
		void settings();
		void updater();
}storage;

//stand alone function
void startup();
void loading_screen();
void animetext(string text, int speed);
void main_menu();
void menu_choice(char choice);
char snginput ();
string inputer(short int);
string inputerPLUS(int type);
void Terms_Condition();
void AboutUs();
void Theme();
void EndOfTheLine();

class STUDENTINFO
{
	public:
	int idnumber; //unique
	
	string last_name;
	string first_name;
	string middle_name;
	string full_name;
	
	string SchoolYear;
	short int age;
	string gender;
	int gender_binary;
	
	string birthday;
	
	int weight;
	int height;
	
	string cellphone_number;
	
	string address;
	string house_number;
	string Barangay;
	string city_municipality;
	string postal_code;
	string Province;
	string Country;
	
	string medical_his;
	string family_med_his;
	string medication_his;
	string treatment_his;
	string med_directives;
	STUDENTINFO *link;
	
}*start, *end, *hold, *frontH, *deleter, *backH, *relink, *profile; 


/*					
start - beginning of the node
end - last node/varies when node are chained or added
hold - ability to hold current node while inputing the data in inputs
frontH - the before the current node >> [node 1   front] -> [node2  present node/node that is currently manipulated] -> [node3    back]
backH - after the current node  ----------------------------------------------------------------------------------------^^^^^^^^^^^//\\
deleter - holds the node that will be deleted and will be remove from node chain.
relink - the key to relink frontH and backH to make a new chain from the deleted node.
profile - act as the current node.
*/

class ENCRYPT_DATA: public STUDENTINFO //I wanna try this one, but yeah it's ok like these. Has no use at the moment.
{
	private:
	int ID;
	string L_N;
	string FST_N;
	string MID_N;
	string FLL_N;
	string S_Y;
	short int AGE;
	string GEN;
	int GEN_BIN;
	string BD;
	int W8;
	int H8;
	string CP_N;
	string ADRS;
	string HOU_NUM;
	string BRGY;
	string CIT_MUN;
	string PST_COD;
	string PRV;
	string COUNT;
	string MCAL_HIS;
	string FAM_MED_HIS;
	string MED_HIS;
	string TRMENT_HIS;
	string MED_DIR;
	ENCRYPT_DATA *next;
	public:
	ENCRYPT_DATA()
	{
		ID =  idnumber;
		L_N = last_name;
		FST_N = first_name;
		MID_N = middle_name;
		FLL_N = full_name;
		S_Y = SchoolYear;
		AGE = age;
		GEN = gender;
		GEN_BIN = gender_binary;
		BD = birthday;
		W8 = weight;
		H8 = height;
		CP_N = cellphone_number;
		ADRS = address;
		HOU_NUM = house_number;
		BRGY = Barangay;
		CIT_MUN = city_municipality;
		PST_COD = postal_code;
		PRV = Province;
		COUNT = Country;
		MCAL_HIS = medical_his;
		FAM_MED_HIS= family_med_his;
		MED_HIS = medication_his;
		TRMENT_HIS = treatment_his;
		MED_DIR = med_directives;
	}
	
	int showID()
	{	return ID;						}
	
	string showL_N()
	{	return L_N;						}
	string showFST_N()
	{	return FST_N;					}
	string showMID_N()
	{	return MID_N;					}
	string showFLL_N()
	{	return FLL_N;					}
	
	int showAGE()
	{	return AGE;						}
	
	string showGEN()
	{	return GEN;						}
	int showGEN_BIN()
	{	return GEN_BIN;					}
	
	string showBD()
	{	return BD;						}
	int showW8()
	{	return W8;						}
	int showH8()
	{	return H8;						}
	
	string showCP_N()
	{	return CP_N;					}
	
	string showADRS()
	{	return ADRS;					}
	string showHOU_NUM()
	{	return HOU_NUM;					}
	string showBRGY()
	{	return BRGY;					}
	string showCIT_MUN()
	{	return CIT_MUN;					}
	string showPST_COD()
	{	return PST_COD;					}
	string showPRV()
	{	return PRV;						}
	string showCOUNT()
	{	return COUNT;					}
	
	string showMCAL_HIS()
	{	return MCAL_HIS;				}
	string showFAM_MED_HIS()
	{	return FAM_MED_HIS;				}
	string showMED_HIS()
	{	return MED_HIS;					}
	string showTRMENT_HIS()
	{	return TRMENT_HIS;				}
	string showMED_DIR()
	{	return MED_DIR;					}
	
}*head = NULL, *tail = NULL, *Lock;

int fire_exit(1); //the access to exit
int erchk(0); // error checking
int numpeople(0); //number of people, will store on different notepad
int errorcode(0); //error coode that will pick an error message
int lighter(0); //program theme

//Main Program
int main()
{
	storage.LoadFiles();
	startup();
	do
	{
		main_menu();
		
	}while(fire_exit == 1);
	
	
}
//End Main


void startup()
{
	int a(2);
	while(a == 1 || a == 2)
	{
	system("CLS");
	title.borders("Del Luna University Student Health Info System");
	if (a == 2)
		{
		cout<<"\n\n\t|";
		animetext("Welcome users to our Program!!!", 7);
		cout<<"\n\t|";
		animetext ("This program will store the data about the student health status.", 7);
		cout<<"\n\t|";
		animetext ("It will also featured search function to find the selected student information.", 7);
		cout<<"\n\t|";
		animetext ("Student information can be listed down to help users find multiple data.", 7);
		cout<<"\n\t|";
		animetext ("We assured the users a secured data keeping and identity teft-free program.", 7);
		cout<<"\n\t|";
		Sleep(500);
		system("pause");
		a = 1;
		}
		
	else if (a == 1)
		{
		cout<<"\n\n\t|";
		animetext ("Loading ...", 6);
		cout<<"\n\t|";
		loading_screen();
		
		break;
		}
		
	}
}

void loading_screen()
{
	for(int i(0); i<=66; i++)
	{
		if(i == 66)
		{
			cout<<"\r\t|";
		}
		else
		cout<<code.character(176);
	}
	for(int i(0); i<65; i++)
	{
	random  = new valuegenerate;
	cout<<code.character(219);
	Sleep(random->value());
	if ((random->value()%2) == 0)
	{
	cout<<code.character(219);
	i++;	
	}
	else if ((random->value()%3) == 0)
	{
	cout<<code.character(219)
		<<code.character(219);
	i +=2;
	}
	}
	cout<<"\n\n\t|Loading Complete:\n\t|";
	system ("pause");
}

void animetext(string text, int speed)
{
	int letspd, spcspd, pncspd;
	switch (speed)
	{
		case 0:
		{
		spcspd = 0;
		pncspd = 0;
		letspd = 0;		
		}break;
		case 3:
		{
		spcspd = 150;
		pncspd = 200;
		letspd = 70;
		}break;
		case 4:
		{
		spcspd = 125;
		pncspd = 200;
		letspd = 40;
		}break;
		case 5:
		{
		spcspd = 100;
		pncspd = 175;
		letspd = 30;
		}break;
		case 6:
		{
		spcspd = 75;
		pncspd = 150;
		letspd = 20;		
		}break;
		case 7:
		{
		spcspd = 50;
		pncspd = 90;
		letspd = 17;		
		}break;
		case 10:
		{
		spcspd = 30;
		pncspd = 60;
		letspd = 15;
		}
	}
	
	int txtlng;
	string animate;
	txtlng = text.length();
	for(int i(0); i <txtlng; i++)
	{
		animate = text.at(i);
		if (animate == " ")
		{
			Sleep(spcspd);
			cout<<text.at(i);
		}
		else if (animate == "!" || animate == ".")
		{
			Sleep(pncspd);
			cout<<text.at(i);
		}
		else
		{
			Sleep(letspd);
			cout<<text.at(i);
		}
		
	}
}

void main_menu()
{
	int mnspd;
	mnspd = error.ercde(erchk);
	
	char choice;
	system("CLS");
	title.borders("Orbit Del Luna Student Health Info Main Menu");
	cout<<"\n\n\t|1.  ";
		animetext("Add Records", mnspd);
	cout<<"\n\t|2.  ";
		animetext("View Record List", mnspd);
	cout<<"\n\t|3.  ";
		animetext("Manage/Search Records", mnspd);
	cout<<"\n\t|4.  ";
		animetext("Screen Theme", mnspd);
	cout<<"\n\t|5.  ";
		animetext("Terms and Conditions", mnspd);
	cout<<"\n\t|6.  ";
		animetext("About Us", mnspd);
	cout<<"\n\t|7.  ";
		animetext("Exit", mnspd);
	cout<<"\n\n";
	
	if(erchk)
	error.ermsg(errorcode);
	
	cout<<"\t                                               []:                 |";
	cout<<"\r\t|Enter a number from the choices above         []: ";
	erchk = 0;
	
	choice = snginput();
	
	if(erchk == 0)
	menu_choice(choice);
		
}

char snginput()
{
	char text;
	for(int i(0); i <100; i++)
	{
		char ger;
		cin.get(ger);
		string tmp;
		tmp = ger;
		if(i == 0)
		{
			text = ger;
			if(ger == '\n')
			{
			erchk = 1;
			errorcode = 5;
			break;
			}
		}
		if(i >= 2)
		{
			erchk = 1;
			errorcode = 1;
		}
		if(ger == '\n')
		{
			break;
		}
	}
	return text;
}

string inputer(short int type)
{
	string returner;
	char InptIndi;
	char outputer[500];
	if(type == 1)
	{
	for(int i(0); i < 500; i++)
	{
		cin.get(InptIndi);
		outputer[i] = InptIndi;
		if(i == 0)
		{
			if (InptIndi == '\n')
			{
				outputer[i] = '_';
				outputer[i+1] ='\0';
				break;
			}
		}
		if (InptIndi == '\n')
			{
				outputer[i]='\0';
				break;
			}
	}
	returner = outputer;
	}
	
	else if(type == 2)
	{
		
		for(int i(0); i < 100; i++)
		{
			char InptIndi; 
			cin.get(InptIndi);
			outputer[i] = InptIndi;
			if (i == 0)
			{
				if(InptIndi == '\n')
				{
					outputer[i] = 'n';
					outputer[i+1] = '/';
					outputer[i+2] = 'a';
					outputer[i+3] = '\0';
					break;
				}
			}
			if (InptIndi == '\n')
			{
			outputer[i]='\0';
			break;
			}
		}
		returner = outputer;
	}
	return returner;
}

string inputerPLUS(int type)
{
	string input = inputer(type);
	erchk = 0;
	if(input == "_\0")
	{
	erchk = 1;
	errorcode = 5;
	}
	return input;
}

void menu_choice(char choice)
{
	switch (choice)
	{
		case '1':
		{
			erchk = 0;
			Mrun = 1;
			run = 1;
			pick1.ui();
		}break;
		case '2':
		{
			erchk = 0;
			error.ercde(erchk);
			pick2.ui();
		}break;
		case '3':
		{
			erchk = 0;
			Srun = 1;
			pick3.ui();
		}break;
		case '4':
		{
			erchk = 0;
			Theme();
		}break;
		case '5':
		{
			erchk = 0;
			error.ercde(erchk);
			Terms_Condition();
		}break;
		case '6':
		{
			erchk = 0;
			error.ercde(erchk);
			AboutUs();
		}break;
		case '7':
		{
			erchk = 0;
			error.ercde(erchk);
			EndOfTheLine();
		}break;
		default:
		{
			erchk = 1;
			errorcode = 1;
		}break;
	}
}

int inputerror::ercde(int error_check)
{
	int s(10);
	if(error_check == 1)
	{	
		if(lighter == 0)
		system("COLOR FC");
		else if(lighter == 1)
		system("COLOR 0C");
		s = 0;
	}
	else
	{
		if(lighter == 0)
		system("COLOR F0");
		else if(lighter == 1)
		system("COLOR 0F");
		s = 10;
	}
	return s;
}
		
void PICK1::textcheck(char text[200], int type)
{
	if (type == 1) // normal lext input, violate no input
	{
		int len_34w(0);
		for(int i(0); i<strlen(text); i++)
		{
			if (isdigit(text[i]))
			{
				if(strlen(text) > 34)
				{
				errorcode = 4;
				len_34w = 1;
				}
				else
				errorcode = 2;
			
				erchk = 1;
				break;
			}
			else if (ispunct(text[i]))
			{
			string tmp;
			tmp = text[i];
				if ((tmp == "," || tmp == ".") || tmp == "-")
					continue;
				else
				{
					if (strlen(text) > 34)
					{
					errorcode = 4;
					len_34w = 1;
					}
					else
					errorcode = 2;
				
					erchk = 1;
					break;
				}
			}
		erchk = 0;
		}
		if(len_34w == 0 && strlen(text) >34 )
		{	
			erchk = 1;
			errorcode = 3;
		}
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}	
	} 
	
	else if(type == 2) //optional enter
	{
		int len_34w(0);
		for(int i(0); i<strlen(text); i++)
		{
			if (isdigit(text[i]))
			{
				if(strlen(text) > 34)
				{
				errorcode = 4;
				len_34w = 1;
				}
				else
				errorcode = 2;
			
				erchk = 1;
				break;
			}
			else if (ispunct(text[i]))
			{
			string tmp;
			tmp = text[i];
				if ((tmp == "," || tmp == ".") || tmp == "-")
					continue;
				else
				{
					if (strlen(text) > 34)
					{
					errorcode = 4;
					len_34w = 1;
					}
					else
					errorcode = 2;
				
					erchk = 1;
					break;
				}
			}
		erchk = 0;
		}
		if(len_34w == 0 && strlen(text) >34 )
		{	
			erchk = 1;
			errorcode = 3;
		}
		
		if(strcmp(text, "n/a") == 0)
		{
			erchk = 0;
			errorcode = 5;
		}	
	}
	
	else if(type == 3) //limit character 3, number only
	{
		for(int i(0); i<strlen(text); i++)
		{
			if (isalpha(text[i]))
			{
				errorcode = 6;
				erchk = 1;
				break;
			}
			else if (ispunct(text[i]))
			{
				errorcode = 6;
				erchk = 1;
				break;
				
			}
		erchk = 0;
		}
		
		if(strlen(text) >3 )
		{	
			erchk = 1;
			errorcode = 6;
		} 
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	
	else if(type == 4) //alphabet, m and f, limit 1 character
	{
		for (int i(0); i<strlen(text); i++)
		{
			string tmp;
			tmp = text[i];
			if (isdigit(text[i]))
			{
				errorcode = 7;
				erchk = 1;
				break;
			}
			else if (((tmp != "m")&&(tmp != "M")) && ((tmp != "f")&&(tmp != "F")))
			{
				errorcode = 7;
				erchk = 1;
				break;
			}
			erchk = 0;
		}
		if (strlen(text) > 1)
		{
			errorcode = 7;
			erchk = 1;
		}
		if (strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	
	else if(type == 5) //selected punctuation, limit 50 characters
	{
		for(int i(0); i<strlen(text); i++)
		{
			string tmp;
			tmp = text[i];
			if (ispunct(text[i]))
			{
				if(((tmp != ".") && (tmp != "-")) && ((tmp != ",") && (tmp != "#")))
				{
				erchk = 1;
				errorcode = 11;
				break;
				}
			}
			erchk = 0;
		}
		if (strlen(text) > 50)
		{
			erchk = 1;
			errorcode = 12;
		}
		if (strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if(type == 6)//numbers and selected punctuation only, limit 10
	{
		for(int i(0); i<strlen(text); i++)
		{
			string tmp;
			tmp = text[i];
			if (ispunct(text[i]))
			{
				if(((tmp != ".") && (tmp != "-")) && (tmp != ","))
				{
				erchk = 1;
				errorcode = 13;
				break;
				}
			}
			else if (isalpha(text[i]))
			{
				erchk = 1;
				errorcode = 13;
				break;
			}
			erchk = 0;
		}
		if (strlen(text) > 10)
		{
			erchk = 1;
			errorcode = 14;
		}
		if (strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if(type == 7)// for date checking
	{
		if(strlen(text) >10)
		{
			erchk = 1;
			errorcode = 1;
		}
		for (int i(0); i<strlen(text); i++)
		{
			string tmp;
			tmp = text[i];
			if(isalpha(text[i]))
			{
				erchk = 1;
				errorcode =1;
				break;
			}
			erchk = 0;
			if(ispunct(text[i]))
			{
				if(i == 2 || i == 5)
				{
					if(tmp == "/")
					{
					continue;
					}
				}
				else
				{
					erchk = 1;
					errorcode = 1;
					break;
				}
			}
		}
		string slash1;
		slash1 = text[2];
		string slash2;
		slash2 = text[5];
		if ((slash1 != "/") && (slash2 != "/"))
		{
			erchk = 1;
			errorcode = 1;
		}
		if (strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if(type == 8)//number only, limit 9 character
	{
		erchk = 0;
		if (strlen(text) != 9)
		{
			erchk = 1;
			errorcode = 16;
		}
		for(int i(0); strlen(text)>i; i++)
		{
			if(isalpha(text[i]))
			{
				erchk = 1;
				errorcode = 1;
				break;	
			}	
			if(ispunct(text[i]))
			{
				erchk = 1;
				errorcode = 1;
				break;
			}
		}
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode =5;
		}
	}
	else if (type ==9) //text infinite, selected puctuation
	{
		erchk = 0;
		for(int i (0); strlen(text) > i; i++)
		{
			string tmp;
			tmp = text[i];
			if(ispunct (text[i]))
			{
				if((tmp==",") || (tmp=="\'") || (tmp=="\"") || (tmp==".") || (tmp=="-") || (tmp=="!") || (tmp=="(") || (tmp==")") || (tmp=="\\") || (tmp=="/") || (tmp=="\[") || (tmp=="]") || (tmp=="&") || (tmp=="#") || (tmp=="%") || (tmp=="+") || (tmp=="="))
				continue;
				else
				{
				erchk = 1;
				errorcode = 1;
				break;
				}
			}
		}
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if (type == 10) //character only 10 to 15 input, no alpha and punctuation
	{
		erchk = 0;
		for(int i(0); strlen(text) > i; i++)
		{
			string tmp;
			tmp = text[i];
			if(isalpha(text[i]))
			{
				erchk = 1;
				errorcode = 1;
			}
			if(ispunct(text[i]))
			{
				erchk = 1;
				errorcode = 1;
			}
		}
		if(strlen(text) > 15 || 10 >strlen(text))
		{
			erchk = 1;
			errorcode = 1;
		}
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if (type == 11) //numbers only
	{
		erchk = 0;
		for(int i(0); strlen(text) > i; i++)
		{
			string tmp;
			tmp = text[i];
			if(isalpha(text[i]))
			{
				erchk = 1;
				errorcode = 1;
			}
			if(ispunct(text[i]))
			{
				erchk = 1;
				errorcode = 1;
			}
		}
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
	else if(type == 12) //limit character 1, number only
	{
		for(int i(0); i<strlen(text); i++)
		{
			if (isalpha(text[i]))
			{
				errorcode = 19;
				erchk = 1;
				break;
			}
			else if (ispunct(text[i]))
			{
				errorcode = 19;
				erchk = 1;
				break;
				
			}
		erchk = 0;
		}
		
		if(strlen(text) >1 )
		{	
			erchk = 1;
			errorcode = 19;
		} 
		if(strcmp(text, "_\0") == 0)
		{
			erchk = 1;
			errorcode = 5;
		}
	}
}

void PICK1::repeat(int onetimerun)
{
	if (onetimerun == 1)
	{
		noderp = 1;
		idnumrp = 1;
		lastnamerp = 2;
		firstnamerp = 2;
		middlenamerp = 2;
		fullnamerp = 2;
		SYrp = 2;
		agerp = 2;
		genderrp = 2;
		bdrp = 2;
		cpnumrp = 2;
		weightrp = 2;
		heightrp = 2;
		MedicalHisrp = 2;
		FamMedHisrp = 2;
		MedHisrp = 2;
		TreatHisrp = 2;
		MedDirrp = 2;
		nodeFrp = 2;
		addressrp = 7;
		run = 0;
		errorcode = 0;
	}
}

void PICK1::node_creation(int repeat)
{
	if (repeat == 1)
	{
		profile = new STUDENTINFO;
		hold = profile;
		noderp = 0;
	}
}

void PICK1::store_idnumber(int repeat)
{
	if(repeat == 1)
	{
	int mspd = error.ercde(erchk);
	cout<<"\n\t|PERSONAL INFORMATION:\n";
	int show(0);
	if (erchk)
	{
	show = 1;
	error.ermsg(errorcode);
	}
	cout<<"\t|";
	animetext("ID Number", mspd);
	cout<<"                   []:                                    |"
		<<"\r\t|ID Number                   []: ";
		
	char idnum[100];
	string tmpidnum;
	
	tmpidnum = inputer(1);
	strcpy(idnum, tmpidnum.c_str());
	
	pick1.textcheck(idnum, 8);
	int idnumNUM;
	
	if(erchk == 0)
	{
		idnumNUM = atoi(idnum);
		if (idnumNUM < 200000000 || idnumNUM >= 202100000)
		{ erchk = 1; errorcode = 18; }
		
		if(erchk == 0)
		{
			
			if(numpeople == 0)
			{
			profile->idnumber = idnumNUM;
			idnumrp = 0;
				if (show == 0)
				lastnamerp = 1;
				else
				idnumrp = 10;
			erchk = 0;
			}
		
			else
			{
			int ok(1);
			profile = start;
				while(profile != NULL)
				{
					if(profile->idnumber == idnumNUM)
					{
					erchk = 1;
					errorcode = 17;
					ok = 0;
					break;
					}
					profile = profile->link;
				}
			
			profile = hold;
				if (ok == 1)
				{
				profile->idnumber = idnumNUM;
				idnumrp = 0;
					if (show == 0)
					lastnamerp = 1;
					else 
					idnumrp = 10;
					erchk = 0;
				}
			}
		}
	}
	}
	else if(repeat == 10)//if the error message show, loop until its gone ang go to this
	{
		lastnamerp = 1;
		idnumrp = 0;
		cout<<"\n\t|PERSONAL INFORMATION:\n"
			<<"\t|ID Number                   []:                                    |"
			<<"\r\t|ID Number                   []: "<<profile->idnumber<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\n\t|PERSONAL INFORMATION:\n"
			<<"\t|ID Number                   []:                                    |"
			<<"\r\t|ID Number                   []: "<<profile->idnumber<<endl;
	}
	
}

void PICK1::store_lastname(int repeat)
{
	if (repeat == 1)
	{
	int mnspd = error.ercde(erchk);
	
	int show(0);
	if (erchk)
	{
	show = 1;
	error.ermsg(errorcode);
	}

	cout<<"\t|";
	animetext("Last Name", mnspd);
	cout<<"                   []:                                    |"
		<<"\r\t|Last Name                   []: ";
	char lastname[100];
	string tmplastname;
	//anti limiter input
 	tmplastname = inputer(1);
 	strcpy(lastname, tmplastname.c_str());
	
	//error checking-my head hurts because of this
	pick1.textcheck(lastname, 1);
	//end of checking
	
	//store if no error
	if(erchk == 0)
	{
		profile->last_name = lastname; 
		lastnamerp = 0; //details will not go to this blcock statement anymore
		if (show == 0)
		firstnamerp = 1;//continue to next line
		else
		lastnamerp = 10;
		erchk = 0;
	}
	}
	
	else if(repeat == 10) //if the error message show, loop until its gone ang go to this
	{
		firstnamerp = 1;
		lastnamerp = 0;
		firstnamerp = 1;
		cout<<"\t|Last Name                   []:                                    |"
			<<"\r\t|Last Name                   []: "<<profile->last_name;
			cout<<endl;
	}
	
	//if repeat is 0
	else if(repeat == 0)
	{
	cout<<"\t|Last Name                   []:                                    |"
		<<"\r\t|Last Name                   []: "<<profile->last_name<<endl;
	}
}

void PICK1::store_firstname (int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		
		//error msg check
		int show(0);
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		
		cout<<"\t|";
		animetext("First Name", mnspd);
		cout<<"                  []:                                    |"
			<<"\r\t|First Name                  []: ";
		char firstname[100];
		string tmpfirstname;
		
		//anti limiter input
		tmpfirstname = inputer(1);
		strcpy(firstname, tmpfirstname.c_str());
		
		//error checking
		pick1.textcheck (firstname, 1);
	
	//store if no error
	if(erchk == 0)
	{
		profile->first_name = firstname; 
		firstnamerp = 0; //details will not go to this blcock statement anymore
		if(show == 0)
		middlenamerp = 1;//continue to next line
		else
		firstnamerp = 10;
		erchk = 0;
	}
	}
	
	else if(repeat == 10)
	{
		middlenamerp = 1;
		firstnamerp = 0;
		cout<<"\t|First Name                  []:                                    |"
			<<"\r\t|First Name                  []: "<<profile->first_name<<endl;
	}
	
	else if(repeat == 0)
	{
	cout<<"\t|First Name                  []:                                    |"
		<<"\r\t|First Name                  []: "<<profile->first_name<<endl;
	}
}

void PICK1::store_middlename(int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		
		//error msg check
		if (erchk) error.ermsg(errorcode);

		
		cout<<"\t                             *optional (\"press enter to continue\")\n";
		cout<<"\t|";
		animetext("Middle Name", mnspd);
		cout<<"                 []:                                    |"
			<<"\r\t|Middle Name                 []: ";
			
		char middlename[100];
		string tmpmiddlename;
		
		//anti-limiter
		tmpmiddlename = inputer(2);
		strcpy(middlename, tmpmiddlename.c_str());
				
		//error checking
		pick1.textcheck(middlename, 2);
		
		//store if no error
		if(erchk == 0)
		{
			profile->middle_name = middlename;
			middlenamerp = 10; //since there is a message in the input field, it will be automatically go to repeatable block oooof code.
			erchk = 0;
		}
	}
	
	else if(repeat == 10)
	{
		middlenamerp = 0;
		fullnamerp = 1;
		cout<<"\t|Middle Name                 []:                                    |"
			<<"\r\t|Middle Name                 []: "<<profile->middle_name<<endl;
	}
	
	else if (repeat == 0)
	{
		cout<<"\t|Middle Name                 []:                                    |"
			<<"\r\t|Middle Name                 []: "<<profile->middle_name<<endl;
	}
}

void PICK1::store_fullname(int repeat)
{
	if (repeat == 1)
	{
		profile->full_name += ((profile->last_name + ", ") + profile->first_name);
		if(profile->middle_name != "n/a")
		{
		profile->full_name += " ";
		string tmp;
		tmp = profile->middle_name.at(0);
		profile->full_name += (tmp + ".");
		}
		fullnamerp = 0;
		SYrp = 1;
	}	
}

void PICK1::store_schoolyear (int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		
		//error msg check
		if (erchk)
		error.ermsg(errorcode);
		
		cout<<"\t|";
		animetext("Year Level", mnspd);
		cout<<"                  []:                                    |"
			<<"\r\t|Year level                  []: ";
		char SY[100];
		string tmpSY;
		
		tmpSY = inputer(1);
		strcpy(SY, tmpSY.c_str());
		
		pick1.textcheck(SY, 12);
		int SYint;
		string SYstr;
		
		if(erchk == 0)
		{
			
			SYint = atoi(SY);
			SYstr = SY;
			if(SYint == 0)
			{
				erchk = 1;
				errorcode = 5;
			}
			
			if(erchk == 0)
			{

				if(SYint == 1)
				{
				profile->SchoolYear = (SYstr + "st Year");
				}
				else if(SYint == 2)
				{
				profile->SchoolYear = (SYstr + "nd Year");
				}
				else if(SYint == 3)
				{
				profile->SchoolYear = (SYstr + "rd Year");
				}
				else
				{
				profile->SchoolYear = (SYstr + "th Year");
				}
				SYrp = 10;
				erchk = 0;
			}
		}
	}
	
	else if(repeat == 10)
	{
		agerp = 1;
		SYrp = 0;
		cout<<"\t|School Year                 []:                                    |"
			<<"\r\t|School Year                 []: "<<profile->SchoolYear<<endl;
	}
	
	else if(repeat == 0)
	{
	cout<<"\t|School Year                 []:                                    |"
		<<"\r\t|School Year                 []: "<<profile->SchoolYear<<endl;
	}
}

void PICK1::store_age(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		int show(0);
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		
		cout<<"\t|";
		animetext("Age", mnspd);
		cout<<"                         []:                                    |"
			<<"\r\t|Age                         []: ";
		char age[100];
		string tmpage;
		
		tmpage = inputer(1);
		strcpy(age, tmpage.c_str());
		
		pick1.textcheck(age, 3);
		int agenum;
		
		if (erchk == 0)
		{
			agenum = atoi(age);
		
			if(agenum <3 || agenum > 122)
			{
			erchk = 1;
			errorcode = 8;
			}
		}
		
		if (erchk == 0)
		{
			profile->age = agenum;
			agerp = 0;
			if(show == 0)
			genderrp = 1;
			else
			agerp = 10;
			erchk = 0;
		}
	}
	
	else if(repeat == 10)
	
	{
		agerp = 0;
		genderrp = 1;
		cout<<"\t|Age                         []:                                    |"
			<<"\r\t|Age                         []: "<<profile->age<<endl;
	}
	
	else if(repeat == 0)
	{
		cout<<"\t|Age                         []:                                    |"
			<<"\r\t|Age                         []: "<<profile->age<<endl;
	}
}

void PICK1::store_gender(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		if (erchk) error.ermsg(errorcode);

		
		cout<<"\t                             (type \'m\' for male, \'f\' for female)\n";
		cout<<"\t|";
		animetext("Sex", mnspd);
		cout<<"                         []:                                    |"
			<<"\r\t|Sex                         []: ";
		char gender[1];
		string tmpgender;
		
		tmpgender = inputer(1);
		strcpy(gender, tmpgender.c_str());
		
		pick1.textcheck (gender, 4);
		
		if(erchk == 0)
		{
			if((strcmp(gender, "m") == 0) || (strcmp(gender, "M") == 0))
			{
				profile->gender = "Male";
				profile->gender_binary = 1;
			}
			else if((strcmp(gender, "f") == 0) || (strcmp(gender, "F") == 0))
			{
				profile->gender = "Female";
				profile->gender_binary = 2;
			}
			genderrp = 10;
			erchk = 0;
		}	
	}
	
	else if(repeat == 10)
	{
		genderrp = 0;
		bdrp = 1;
		cout<<"\t|Sex                         []:                                    |"
			<<"\r\t|Sex                         []: "<<profile->gender<<endl;
	}
	
	else if(repeat == 0)
	{
		cout<<"\t|Sex                         []:                                    |"
			<<"\r\t|Sex                         []: "<<profile->gender<<endl;
	}
	
}

void PICK1::store_birthday(int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		if (erchk) error.ermsg(errorcode);

		
		cout<<"\t                             *mm/dd/yyyy (use slash to sperate each)\n";
		cout<<"\t|";
		animetext("Birthday", mnspd);
		cout<<"                    []:                                    |"
			<<"\r\t|Birthday                    []: ";
			
		char bd[100];
		string tmpbd;
		
		tmpbd = inputer(1);
		strcpy(bd, tmpbd.c_str());
		
		pick1.textcheck(bd, 7);
		
		if(erchk == 0)
		{
			string tmp = "";
			tmp += bd;
			string day;
			string month = "";
			string year = "";
			int dayint;
			int monthint;
			int yearint;
			
			for(int i(0); i <11; i++)
			{
				if(i >= 6 && i <= 10 )
				year += tmp[i];
				if(i >= 0 && i <= 1) 
				month += tmp[i];
				if(i >= 3 && i <= 4)
				day += tmp[i];
			}
			year, month, day += "\0";
			stringstream convertyear(year);
			convertyear>>yearint;
			stringstream convertmonth(month);
			convertmonth>>monthint;
			stringstream convertday(day);
			convertday>>dayint;
			
			
			if(yearint > 1900 && 2020 > yearint)
			{
				int january(31),february(28),march(31),april(30),may(31),june(30),july(31),august(31),september(30),october(31),november(30),december(31);
				if((yearint % 4) == 0)
				february = 29;
				if(monthint >= 1 && monthint <= 12)
				{
					switch (monthint)
					{
						case 1:
						{
							if (january < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 2:
						{
							if (february < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 3:
						{
							if (march < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 4:
						{
							if (april < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 5:
						{
							if (may < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 6:
						{
							if (june < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 7:
						{
							if (july < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 8:
						{
							if (august < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 9:
						{
							if (september < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 10:
						{
							if (october < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 11:
						{
							if (november < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
						case 12:
						{
							if (december < dayint || dayint <= 0)
							{
								erchk = 1;
								errorcode = 15;
							}
						}break;
					}
				}
				else
				{
					erchk = 1;
					errorcode = 15;
				}
				
				
			}
			else
			{
				erchk = 1;
				errorcode = 15;
			}
		}
		
		if (erchk == 0)
		{
		profile->birthday = bd;
		bdrp = 10;
		erchk = 0;
		}
	}
	else if(repeat == 10)
	{
		bdrp = 0;
		cpnumrp = 1;
		cout<<"\t|Birthday                    []:                                    |"
			<<"\r\t|Birthday                    []: "<<profile->birthday<<endl;
	}
	
	else if(repeat == 0)
	{
		cout<<"\t|Birthday                    []:                                    |"
			<<"\r\t|Birthday                    []: "<<profile->birthday<<endl;
	}
	
}

void PICK1::store_cellphonenum (int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
	
		int show(0);
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		
		cout<<"\t|";
		animetext("Cellphone Number", mnspd);
		cout<<"            []:                                    |"
			<<"\r\t|Cellphone Number            []: ";
		char cpnumber[100];
		string tmpcpnumber;
		//anti limiter input
 		tmpcpnumber = inputer(1);
 		strcpy(cpnumber, tmpcpnumber.c_str());
 		
 		pick1.textcheck(cpnumber, 10);
 		if(erchk == 0)
 		{
 			profile->cellphone_number = cpnumber;
 			cpnumrp = 0;
 			if(show == 0)
 			weightrp = 1;
 			else
 			cpnumrp = 10;
 			
		}
		
	}
	
	else if(repeat == 10)
	{
	weightrp = 1;
	cpnumrp = 0;
	cout<<"\t|Cellphone Number            []:                                    |"
		<<"\r\t|Cellphone Number            []: "<<profile->cellphone_number<<endl;
	}
	else if(repeat == 0)
	{
	cout<<"\t|Cellphone Number            []:                                    |"
		<<"\r\t|Cellphone Number            []: "<<profile->cellphone_number<<endl;
	}
}

void PICK1::store_weight(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		if (erchk) error.ermsg(errorcode);
		
		cout<<"\t                             *mesurement \"kg\"\n";
		cout<<"\t|";
		animetext("Weight", mnspd);
		cout<<"                      []:                                    |"
			<<"\r\t|Weight                      []: ";
		char weight[100];
		string tmpweight;
		
		tmpweight = inputer(1);
		strcpy(weight, tmpweight.c_str());
		
		pick1.textcheck(weight, 3);
		
		int weightnum;
		if(erchk == 0)
		{
		weightnum = atoi(weight);
		if (weightnum < 5 || weightnum > 600)
		{
			erchk = 1;
			errorcode = 9;
		}
		}
		
		if(erchk == 0)
		{
			profile->weight = weightnum;
			weightrp = 10;
			erchk = 0;
		}
		
	}
	
	else if (repeat == 10)
	{
		weightrp = 0;
		heightrp = 1;	
		cout<<"\t|Weight                      []:                                    |"
			<<"\r\t|Weight                      []: "<<profile->weight<<" kg"<<endl;
	}
	
	else if(repeat == 0)
	{
		cout<<"\t|Weight                      []:                                    |"
			<<"\r\t|Weight                      []: "<<profile->weight<<" kg"<<endl;	
	}
}

void PICK1::store_height(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);

		if (erchk) error.ermsg(errorcode);

		cout<<"\t                             *mesurement \"cm\"\n";
		cout<<"\t|";
		animetext("Height", mnspd);
		cout<<"                      []:                                    |"
			<<"\r\t|Height                      []: ";
		char height[100];
		string tmpheight;
		
		tmpheight = inputer(1);
		strcpy(height, tmpheight.c_str());
		
		pick1.textcheck(height, 3);
		
		int heightnum;
		if(erchk == 0)
		{
		heightnum = atoi(height);
		if (heightnum < 45 || heightnum > 272)
		{
			erchk = 1;
			errorcode = 10;
		}
		}
		
		if(erchk == 0)
		{
			
			profile->height = heightnum;
			heightrp = 10;
			erchk = 0;
		}
	}
	else if (repeat == 10)
	{
		heightrp = 0;
		addressrp =6;
		cout<<"\t|Height                      []:                                    |"
			<<"\r\t|Height                      []: "<<profile->height<<" cm"<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\t|Height                      []:                                    |"
			<<"\r\t|Height                      []: "<<profile->height<<" cm"<<endl;	
	}
}

void PICK1::store_address (int repeat)
{
	if (repeat == 6) //House number
	{
		int mnspd = error.ercde(erchk);
		if (erchk)
		error.ermsg(errorcode);
		
		cout<<"\t                      *Unit\\house\\building\\street number + street name\n";
		cout<<"\t|";
		animetext("House Number", mnspd);
		cout<<"               []:                                     |"
			<<"\r\t|House Number                []: ";
		char h_num[100];
		string tmp_num;
		
		tmp_num = inputer(1);
		strcpy(h_num, tmp_num.c_str());
		
		pick1.textcheck(h_num, 5);
		
		if(erchk == 0)
		{
			profile->house_number = h_num;
			addressrp = 5;
			erchk = 0;
		}	
	}
	else if (repeat == 5) //Barangay
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		
		int mnspd = error.ercde(erchk);
		if (erchk)
		error.ermsg(errorcode);
		
		cout<<"\t                             *Barangay number/name/zone\n";
		cout<<"\t|";
		animetext("Barangay", mnspd);
		cout<<"                   []:                                     |"
			<<"\r\t|Barangay                    []: ";
		
		char barangay[100];
		string tmpbg;
		
		tmpbg = inputer(1);
		strcpy(barangay, tmpbg.c_str());
		
		pick1.textcheck(barangay, 5);
		
		if(erchk == 0)
		{
			profile->Barangay = barangay;
			addressrp = 4;
			erchk = 0;
		}
	}
	else if (repeat == 4) // city municipality
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	

		int mnspd = error.ercde(erchk);
		if (erchk)
		error.ermsg(errorcode);
				
		cout<<"\t|";
		animetext("City/Municipality", mnspd);
		cout<<"          []:                                     |"
			<<"\r\t|City/Municipality           []: ";

		
		char city[100];
		string tmpcity;
		
		tmpcity = inputer(1);
		strcpy(city, tmpcity.c_str());
		
		pick1.textcheck(city, 5);
		
		if(erchk == 0)
		{
			profile->city_municipality = city;
			addressrp = 3;
			erchk = 0;
		}
		
	}
	else if (repeat == 3)//postal
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	
		cout<<"\t|City/Municipality          []:                                     |"
			<<"\r\t|City/Municipality           []: "<<profile->city_municipality<<endl;
			
		int mnspd = error.ercde(erchk);
		if (erchk)
		error.ermsg(errorcode);
		
		cout<<"\t|";
		animetext("Postal Code", mnspd);
		cout<<"                 []:                                    |"
			<<"\r\t|Postal Code                 []: ";
		
		char postal[100];
		string tmppostal;
		
		tmppostal = inputer(1);
		strcpy(postal, tmppostal.c_str());
		
		pick1.textcheck(postal, 6);
		
		if(erchk == 0)
		{
			profile->postal_code = postal;
			addressrp = 2;
			erchk = 0;
		}
	}
	else if (repeat == 2) //province
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	
		cout<<"\t|City/Municipality          []:                                     |"
			<<"\r\t|City/Municipality           []: "<<profile->city_municipality<<endl;
		cout<<"\t|Postal Code                []:                                     |"
			<<"\r\t|Postal Code                 []: "<<profile->postal_code<<endl;
			
		int mnspd = error.ercde(erchk);
		if (erchk)
		error.ermsg(errorcode);
		
		cout<<"\t|";
		animetext("Province", mnspd);
		cout<<"                    []:                                    |"
			<<"\r\t|Province                    []: ";
			
		char province[100];
		string tmpprovince;
		tmpprovince = inputer(1);
		strcpy(province,tmpprovince.c_str());
		
		
		pick1.textcheck(province, 1);
		
		if(erchk == 0)
		{
			profile->Province = province;
			addressrp = 1;
			erchk = 0;
		}		
	}
	
	else if (repeat == 1) //country
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	
		cout<<"\t|City/Municipality          []:                                     |"
			<<"\r\t|City/Municipality           []: "<<profile->city_municipality<<endl;
		cout<<"\t|Postal Code                []:                                     |"
			<<"\r\t|Postal Code                 []: "<<profile->postal_code<<endl;
		cout<<"\t|Province                   []:                                     |"
			<<"\r\t|Province                    []: "<<profile->Province<<endl;
			
		int mnspd = error.ercde(erchk);
		int show(0);
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		cout<<"\t|";
		animetext("Country", mnspd);
		cout<<"                     []:                                    |"
			<<"\r\t|Country                     []: ";
		
		char country[100];
		string tmpcountry;
		
		tmpcountry = inputer(1);
		strcpy(country, tmpcountry.c_str());
		
		pick1.textcheck(country, 1);
		
		if(erchk == 0)
		{
			profile->Country = country;
			addressrp = 0;
			profile->address = profile->house_number + ", ";
			profile->address += profile->Barangay + ", ";
			profile->address += profile->city_municipality + ", ";
			profile->address += profile->postal_code + ", ";
			profile->address += profile->Province + ", ";
			profile->address += profile->Country;
			
			addressrp = 0;
			if(show == 0)
			MedicalHisrp = 1;
			else
			addressrp = 10;
			erchk = 0;
		}		
	}
	else if(repeat == 10)
	{
		addressrp = 0;
		MedicalHisrp = 1;
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	
		cout<<"\t|City/Municipality          []:                                     |"
			<<"\r\t|City/Municipality           []: "<<profile->city_municipality<<endl;
		cout<<"\t|Postal Code                []:                                     |"
			<<"\r\t|Postal Code                 []: "<<profile->postal_code<<endl;
		cout<<"\t|Province                   []:                                     |"
			<<"\r\t|Province                    []: "<<profile->Province<<endl;
		cout<<"\t|Country                    []:                                     |"
			<<"\r\t|Country                     []: "<<profile->Country<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\t|House Number               []:                                     |"
			<<"\r\t|House Number                []: "<<profile->house_number<<endl;
		cout<<"\t|Barangay                   []:                                     |"
			<<"\r\t|Barangay                    []: "<<profile->Barangay<<endl;	
		cout<<"\t|City/Municipality          []:                                     |"
			<<"\r\t|City/Municipality           []: "<<profile->city_municipality<<endl;
		cout<<"\t|Postal Code                []:                                     |"
			<<"\r\t|Postal Code                 []: "<<profile->postal_code<<endl;
		cout<<"\t|Province                   []:                                     |"
			<<"\r\t|Province                    []: "<<profile->Province<<endl;
		cout<<"\t|Country                    []:                                     |"
			<<"\r\t|Country                     []: "<<profile->Country<<endl;
			
	}
	
}

void PICK1::store_healthinpt0(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		cout<<"\tMedical Status:\n";
		int show(0);
		if (erchk) 
		{
		show = 1;
		error.ermsg(errorcode);
		}
		cout<<"\t|";
		animetext("Medical History", mnspd);
		cout<<"\n\t|[]: ";
		
		char heltinpt[512];
		string tmpheltinpt;
		
		tmpheltinpt = inputer(1);
		strcpy(heltinpt, tmpheltinpt.c_str());
		
		pick1.textcheck(heltinpt, 9);
		
		if(erchk == 0)
		{
			profile->medical_his = heltinpt;
			MedicalHisrp = 0;
			if(show == 0)
			FamMedHisrp = 1;
			else
			MedicalHisrp = 10;
			erchk = 0;
			
		}
	}
	else if (repeat == 10)
	{
		FamMedHisrp = 1;
		MedicalHisrp = 0;
		cout<<"\tHealth Status:\n"
			<<"\t|Medical History"
			<<"\n\t|[]: "<<profile->medical_his<<endl;
	}
	else if (repeat == 0)
	{
		cout<<"\tHealth Status:\n"
			<<"\t|Medical History"
			<<"\n\t|[]: "<<profile->medical_his<<endl;
	}
}

void PICK1::store_healthinpt1(int repeat)
{
	if (repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		int show(0);
		if (erchk) 
		{
		show = 1;
		error.ermsg(errorcode);
		}
		cout<<"\t|";
		animetext("Family Medical History", mnspd);
		cout<<"\n\t|[]: ";
		
		char heltinpt[512];
		string tmpheltinpt;
		
		tmpheltinpt = inputer(1);
		strcpy(heltinpt, tmpheltinpt.c_str());
		
		pick1.textcheck(heltinpt, 9);
		
		if(erchk == 0)
		{
			profile->family_med_his = heltinpt;
			FamMedHisrp = 0;
			if(show == 0)
			MedHisrp = 1;
			else
			FamMedHisrp = 10;
			erchk = 0;
			
		}
	}
	else if (repeat == 10)
	{
		MedHisrp = 1;
		FamMedHisrp = 0;
		cout<<"\tHealth Status:\n"
			<<"\t|Family Medical History"
			<<"\n\t|[]: "<<profile->family_med_his<<endl;
	}
	else if (repeat == 0)
	{
		cout<<"\tHealth Status:\n"
			<<"\t|Family Medical History"
			<<"\n\t|[]: "<<profile->family_med_his<<endl;
	}
}

void PICK1::store_healthinpt2(int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		int show(0);		
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		cout<<"\t|";
		animetext("Medication History", mnspd);
		cout<<"\n\t|[]: ";
		
		char heltinpt[512];
		string tmpheltinpt;
		
		tmpheltinpt = inputer(1);
		strcpy(heltinpt, tmpheltinpt.c_str());
		
		pick1.textcheck(heltinpt, 9);
		
		if(erchk == 0)
		{
			profile->medication_his = heltinpt;
			MedHisrp = 0;
			if(show == 0)
			TreatHisrp = 1;
			else
			MedHisrp = 10;
			erchk = 0;
		}
	}
	else if(repeat == 10)
	{
		MedHisrp = 0;
		TreatHisrp = 1;
		cout<<"\t|Medication History"
			<<"\n\t|[]: "<<profile->medication_his<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\t|Medication History"
			<<"\n\t|[]: "<<profile->medication_his<<endl;
	}
	
}

void PICK1::store_healthinpt3(int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);	
		int show(0);
		if (erchk)
		{
		show = 1;
		error.ermsg(errorcode);
		}
		
		cout<<"\t|";
		animetext("Treatment History", mnspd);
		cout<<"\n\t|[]: ";
		
		char heltinpt[512];
		string tmpheltinpt;
		
		tmpheltinpt = inputer(1);
		strcpy(heltinpt, tmpheltinpt.c_str());
		
		pick1.textcheck(heltinpt, 9);
		
		if(erchk == 0)
		{
			profile->treatment_his = heltinpt;
			TreatHisrp = 0;
			if(show==0)
			MedDirrp = 1;
			else
			TreatHisrp = 10;
			erchk = 0;	
		}
	}
	else if(repeat == 10)
	{
		TreatHisrp = 0;
		MedDirrp = 1;
		cout<<"\t|Treatment History"
			<<"\n\t|[]: "<<profile->treatment_his<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\t|Treatment History"
			<<"\n\t|[]: "<<profile->treatment_his<<endl;
	}
	
}

void PICK1::store_healthinpt4(int repeat)
{
	if(repeat == 1)
	{
		int mnspd = error.ercde(erchk);
		int show(0);
		if (erchk)
		{
		error.ermsg(errorcode);
		show = 1;
		}
		cout<<"\t|";
		animetext("Medical Directives", mnspd);
		cout<<"\n\t|[]: ";
		
		char heltinpt[512];
		string tmpheltinpt;
		
		tmpheltinpt = inputer(1);
		strcpy(heltinpt, tmpheltinpt.c_str());
		
		pick1.textcheck(heltinpt, 9);
		
		if(erchk == 0)
		{
			profile->med_directives = heltinpt;
			MedDirrp = 0;
			if (show == 0)
			nodeFrp = 1;
			else
			MedDirrp = 10;
			erchk = 0;	
		}
	}
	else if(repeat == 10)
	{
		MedDirrp = 0;
		nodeFrp = 1;
		cout<<"\t|Medical Directives"
			<<"\n\t|[]: "<<profile->med_directives<<endl;
	}
	else if(repeat == 0)
	{
		cout<<"\t|Medical Directives"
			<<"\n\t|[]: "<<profile->med_directives<<endl;
	}
	
}

void PICK1::node_finisher(int repeat)
{
	if(repeat == 2)
	{
		profile->link = NULL;
	}
	else if (repeat == 1)
	{
		profile->link = NULL;
		int mnspd = error.ercde(erchk);	
		cout<<endl;	
		if (erchk)
		error.ermsg(errorcode);

		cout<<"\t              (type 'y' to continue, type any to go back in the main menu)"
			<<"\n\t|";
		animetext("DO YOU WANT TO INPUT RECORDS AGAIN []: ", mnspd);
	
		erchk = 0;
		string choice;
		choice = inputerPLUS(1);
		
		if (erchk == 0)
		{
			if(numpeople == 0)
			{ start = profile; end = profile;}
			else
			{ end->link = profile; end = profile;}	
			numpeople++;
			storage.updater();
			if(choice == "y" || choice == "Y")
				run = 1;
			else
				Mrun = 0;
		}
	}
}

void PICK1::ui()
{
	do
	{		
	system("CLS");
	error.ercde(erchk);
	title.borders("ADD STUDENT\'S HEALTH RECORD");
	pick1.repeat(run);
	pick1.node_creation(noderp);
	pick1.store_idnumber(idnumrp);
	pick1.store_lastname(lastnamerp);
	pick1.store_firstname(firstnamerp);
	pick1.store_middlename(middlenamerp);
	pick1.store_fullname(fullnamerp);
	pick1.store_schoolyear(SYrp);
	pick1.store_age (agerp);
	pick1.store_gender (genderrp);
	pick1.store_birthday (bdrp);
	pick1.store_cellphonenum (cpnumrp);
	pick1.store_weight (weightrp);
	pick1.store_height (heightrp);
	pick1.store_address (addressrp);
	pick1.store_healthinpt0 (MedicalHisrp);
	pick1.store_healthinpt1 (FamMedHisrp);
	pick1.store_healthinpt2 (MedHisrp);
	pick1.store_healthinpt3 (TreatHisrp);
	pick1.store_healthinpt4 (MedDirrp);
	pick1.node_finisher(nodeFrp);
	//system("pause");
	}while(Mrun == 1);
}

void PICK2::norecords()
{
	title.borders("Student Rercord List");
	cout<<"\n\t|NO RECORDS YET!\n\t|";
}

void PICK2::showrecords()
{
	title.borders("Student Record List");
	cout<<"\n\t|Number of Student(s): "<<numpeople<<endl<<endl;
	
	relink = profile;
	profile = start;
	int listnum(1);
	while(profile != NULL)
	{
		cout<<"\tList Number#:   ---------------------------------------------------|"
			<<"\r\tList Number#: "<<listnum<<endl;
		cout<<"\t|ID Number                     []: "<<profile->idnumber<<endl;
		cout<<"\t|Name                          []: "<<profile->full_name<<endl;
		cout<<"\t|Year Level                    []: "<<profile->SchoolYear<<endl;
		cout<<"\t|Age                           []: "<<profile->age<<endl;
		cout<<"\t|Sex                           []: "<<profile->gender<<endl;
		cout<<"\t|Birthday                      []: "<<profile->birthday<<endl;
		cout<<"\t|Cellphone Numner              []: "<<profile->cellphone_number<<endl;
		cout<<"\t|Weight                        []: "<<profile->weight<<" kg"<<endl;
		cout<<"\t|Height                        []: "<<profile->height<<" cm"<<endl;
		cout<<"\t|Address                       []: "<<profile->address<<endl;
		cout<<"\t|Medical History\n\t     "<<profile->medical_his<<endl;
		cout<<"\t|Family Medical History\n\t     "<<profile->family_med_his<<endl;
		cout<<"\t|Medication History\n\t     "<<profile->medication_his<<endl;
		cout<<"\t|Treatment History\n\t     "<<profile->treatment_his<<endl;
		cout<<"\t|Medical Directives\n\t     "<<profile->med_directives<<endl<<endl;
		listnum++;
		profile = profile->link;
	}
	profile = relink;
}

void PICK2::ui()
{
	system("CLS");
	
	if(numpeople == 0)
	pick2.norecords();
	else
	pick2.showrecords();
	cout<<"\t|"; system("pause");
}

void PICK3::S_delete(int type)
{
	goback2 = 0;	
	cout<<endl;
	if (erchk) error.ermsg(errorcode);
	error.ercde(erchk);
	
	if(goback3 == 1)
	{
	
	cout<<"\t|Pick a number in the list above to delete data []: ";
	string choice;
	char Choice[200];
	choice = inputer(1);
	strcpy(Choice, choice.c_str());
	pick1.textcheck(Choice,11);
	int idnumcheck = atoi(Choice);			
	if (idnumcheck > result)
	{	erchk = 1; errorcode = 1; goback2 = 0; }
	
	if(erchk== 0)
	{	
			int ref = holder[idnumcheck], numloop(0);	
			profile = start; 	//1
			relink = start->link;	//2
			while(profile != NULL)
			{
				deleter = profile;  //1
				if(deleter->idnumber == ref)
				{
				numpeople--;
				deleter = NULL;
			
					if(numpeople == 0) break;
					else
					{
						if(numloop == 0)
							start = relink;
						else
						{
							backH->link = frontH;
							if(numpeople == numloop) 
							end = backH;	
						}
						break;
					}
				}
				if(deleter != NULL)
				{
				numloop++;
				backH = profile;
				profile = profile -> link;
				frontH = profile->link;
				}
			}
			storage.updater();
			cout<<"\n\t|The data with an ID Number \""<<ref<<"\" has been deleted.\n\t|";
			system("pause");
			goback3 = 0;		
	}
	}
	
	else if(goback3 == 0)
	{	
		if(numpeople == 0)
		{
			system ("CLS");
			title.borders("Manage Records");
			cout<<"\n\t|There are no student data left!!!\n\t|";
			system("pause");
			erchk = 0;
			Srun = 0;
			S_optrun = 0;
		}
		else
		{
			string CChoice;
			cout<<"\n\t|type 'y' to delete again"
			    <<"\n\t      's' to search again"
				<<"\n\t      'e' to go in the main menu"
				<<"\n\t|Do you want to delete again []: ";
			CChoice = inputerPLUS(1);
			if(erchk == 0)
			{
				if(CChoice == "y" || CChoice == "Y")
				{ erchk = 0; goback3 = 1; }
				else if(CChoice == "s" ||  CChoice == "S")
				{ erchk = 0; goback1 = 1; goback2 = 1; goback3 = 1; }
				else if(CChoice == "e" || CChoice == "E")
				{ Srun = 0; S_optrun = 0; erchk = 0;}
				else
				{ erchk = 1; errorcode = 1;}
			}	
		}
	}
}

void PICK3::S_earch(string text, int type)
{
	goback1 = 0;
	error.ercde(erchk);
	int txtlength = text.length();
	int digits;
	
	if(type == 2 || type == 4)
	{char arcter[10]; strcpy(arcter, text.c_str()); digits = atoi(arcter);}
	
	cout<<"\n\t-xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx- \n\n";
	
	int release(0), numloop(0), numlist(0);
	relink = profile;
	profile = start;
	while(profile != NULL)
	{

		release = 0;
		numloop = 0;
		if(type==1 || type==3)
		{
			string tmp;
			if(type==1)
			tmp = profile->full_name;
			else if(type==3)
			tmp = profile->address;
			do
			{ 
				string CASELOCK, textLOCK;
				char tmpCASELOCK[txtlength], tmpText[txtlength];
				textLOCK = tmp.substr(numloop, txtlength);
				strcpy(tmpText, textLOCK.c_str());
				strcpy(tmpCASELOCK, text.c_str());
				
				for(int i(0); i <txtlength; i++)
				{
					if (isupper(tmpText[i]))
						CASELOCK += toupper(tmpCASELOCK[i]);
					else if(islower(tmpText[i]))
						CASELOCK += tolower(tmpCASELOCK[i]);
					else
						CASELOCK += tmpCASELOCK[i];
					
				}
				if(CASELOCK == textLOCK)
				{
					release = 1;
					numloop = tmp.length();
				}
			numloop++;
			}while(numloop<tmp.length());
		}
		if(type==2 || type==4)
		{ 
			if(type==2)
			{ if(digits == profile->idnumber) release = 1; }
			else if (type == 4)
			{ if(digits == profile->age) release = 1; }
		}
		if(type == 5)
		{
			if(text == "M" || text == "m")
			{ 
			if(profile->gender_binary == 1) 
			release = 1; 
			}
			else if(text == "F" || text == "f")
			{
			if(profile->gender_binary == 2) 
			release = 1; 
			}
		}
		
		if(release == 1)
		{
		numlist++;
		cout<<"\tList Number#:   ---------------------------------------------------|"
			<<"\r\tList Number#: "<<numlist<<endl;
		cout<<"\t|ID Number                     []: "<<profile->idnumber<<endl;
		cout<<"\t|Name                          []: "<<profile->full_name<<endl;
		cout<<"\t|Year Level                    []: "<<profile->SchoolYear<<endl;
		cout<<"\t|Age                           []: "<<profile->age<<endl;
		cout<<"\t|Sex                           []: "<<profile->gender<<endl;
		cout<<"\t|Birthday                      []: "<<profile->birthday<<endl;
		cout<<"\t|Cellphone Numner              []: "<<profile->cellphone_number<<endl;
		cout<<"\t|Weight                        []: "<<profile->weight<<" kg"<<endl;
		cout<<"\t|Height                        []: "<<profile->height<<" cm"<<endl;
		cout<<"\t|Address                       []: "<<profile->address<<endl;
		cout<<"\t|Medical History\n\t     "<<profile->medical_his<<endl;
		cout<<"\t|Family Medical History\n\t     "<<profile->family_med_his<<endl;
		cout<<"\t|Medication History\n\t     "<<profile->medication_his<<endl;
		cout<<"\t|Treatment History\n\t     "<<profile->treatment_his<<endl;
		cout<<"\t|Medical Directives\n\t     "<<profile->med_directives<<endl<<endl;
		int tmpnum = profile->idnumber;
		holder[0] = 0;
		holder[numlist] = tmpnum;
		}
		profile = profile->link;
	
	}
	profile = relink;
	
	result = numlist;
	if(numlist == 0) cout<<"\t|NO RECORD FOUND!\n\n";

	
	if (goback2 == 1)
	{
		cout<<"\t|type 'n' to go back in the previous section\n";
		if(numlist != 0 ) cout<<"\t      'd' delete a record\n";
		cout<<"\t      's' to search again\n";
		if (erchk) { cout<<endl; error.ermsg(errorcode); }
		cout<<"\t|[]: ";
		erchk = 0;
		Hchoice = inputerPLUS(1);
	}
	goback1 = 0;
	
	if(erchk == 0 || goback2 == 0)
	{
			
		if (Hchoice == "n" || Hchoice == "N")
		{ run = 0; S_optrun = 0; erchk = 0; }
		else if (Hchoice == "d" || Hchoice == "D")
		{ if(goback2 == 1)erchk = 0; S_delete(type);}
		else if (Hchoice == "s"|| Hchoice == "S")
		{ goback1 = 1; erchk = 0; }
		else
		{ erchk = 1; errorcode = 1;}
		
	}
	
}

void PICK3::S_name()
{
	do{
	system("CLS");
	title.borders("Search Name");
	cout<<endl;
	
	int mnspd;
	if(goback1 == 1)
	{mnspd = error.ercde(erchk);	
	if (erchk) 
	{error.ermsg(errorcode);} }
	
	if(goback1 == 1)
	{
	erchk = 0;
	cout<<"\t|";
	animetext("Enter Text", mnspd);
	cout<<" []: ";
	char Ctext[200];
	Htext = inputer(1);
	strcpy(Ctext, Htext.c_str());
	pick1.textcheck(Ctext, 1);
	}
	
	if(erchk == 0 || goback1 == 0)
	pick3.S_earch(Htext, 1);
	
	}while (S_optrun == 1);
}

void PICK3::S_idnum()
{
do{
	system("CLS");
	title.borders("Search ID Number");
	cout<<endl;
	
	int mnspd;
	if(goback1 == 1)
	{mnspd = error.ercde(erchk);	
	if (erchk) 
	{error.ermsg(errorcode);} }
	
	if(goback1 == 1)
	{
	erchk = 0;
	cout<<"\t|";
	animetext("Enter number", mnspd);
	cout<<" []: ";
	char Ctext[200];
	Htext = inputer(1);
	strcpy(Ctext, Htext.c_str());
	pick1.textcheck(Ctext, 8);
	}
	
	if(erchk == 0 || goback1 == 0)
	pick3.S_earch(Htext, 2);
	
	}while (S_optrun == 1);
}

void PICK3::S_address()
{
	do{
	system("CLS");
	title.borders("Search Address");
	cout<<endl;
	
	int mnspd;
	if(goback1 == 1)
	{mnspd = error.ercde(erchk);	
	if (erchk) 
	{error.ermsg(errorcode);} }
	
	if(goback1 == 1)
	{
	erchk = 0;
	cout<<"\t|";
	animetext("Enter Text", mnspd);
	cout<<" []: ";
	char Ctext[200];
	Htext = inputer(1);
	strcpy(Ctext, Htext.c_str());
	pick1.textcheck(Ctext, 9);
	}
	
	if(erchk == 0 || goback1 == 0)
	pick3.S_earch(Htext, 3);
	
	}while (S_optrun == 1);
}

void PICK3::S_age()
{
	do{
	system("CLS");
	title.borders("Search Age");
	cout<<endl;
	
	int mnspd;
	if(goback1 == 1)
	{mnspd = error.ercde(erchk);	
	if (erchk) 
	{error.ermsg(errorcode);} }
	
	if(goback1 == 1)
	{
	erchk = 0;
	cout<<"\t|";
	animetext("Enter Numbers", mnspd);
	cout<<" []: ";
	char Ctext[200];
	Htext = inputer(1);
	strcpy(Ctext, Htext.c_str());
	pick1.textcheck(Ctext, 3);
	}
	
	if(erchk == 0 || goback1 == 0)
	pick3.S_earch(Htext, 4);
	
	}while (S_optrun == 1);
}

void PICK3::S_gender()
{
	do{
	system("CLS");
	title.borders("Filter Gender");
	cout<<endl;
	
	int mnspd;
	if(goback1 == 1)
	{mnspd = error.ercde(erchk);	
	if (erchk) 
	{error.ermsg(errorcode);} }
	
	if(goback1 == 1)
	{
	erchk = 0;
	cout<<"\t|";
	animetext("Enter 'm' for male, 'f' for female", mnspd);
	cout<<" []: ";
	char Ctext[200];
	Htext = inputer(1);
	strcpy(Ctext, Htext.c_str());
	pick1.textcheck(Ctext, 4);
	}
	
	if(erchk == 0 || goback1 == 0)
	pick3.S_earch(Htext, 5);
	
	}while (S_optrun == 1);
}

void PICK3::norecords()
{
	cout<<"\n\t|NO RECORDS!\n\t|";
	system("pause");
	Srun = 0;
}

void PICK3::listoption() 
{
		int mnspd = error.ercde(erchk);
		cout<<"\n"
			<<"\t  1.     Search Name\n"
			<<"\t  2.     Search Id Number\n"
			<<"\t  3.     Search Address\n"
			<<"\t  4.     Search Age\n"
			<<"\t  5.     Gender Filter\n"
			<<"\t  6.     Back to the main menu\n\n";	
		if(erchk) error.ermsg(errorcode);
		cout<<"\t|";
		animetext("Type The Number of Your Choice", mnspd);
		cout<<" []: ";
		char text;
		text = snginput();
		if (erchk == 0);
		{
			if(text == '1')
			{ erchk = 0; S_optrun = 1; goback1 = 1; goback2 = 1; goback3 = 1; S_name();}
			else if (text == '2')
			{ erchk = 0; S_optrun = 1; goback1 = 1; goback2 = 1; goback3 = 1; S_idnum();}
			else if (text == '3')
			{ erchk = 0; S_optrun = 1; goback1 = 1; goback2 = 1; goback3 = 1; S_address();}
			else if (text == '4')
			{ erchk = 0; S_optrun = 1; goback1 = 1; goback2 = 1; goback3 = 1; S_age();}
			else if (text == '5')
			{ erchk = 0; S_optrun = 1; goback1 = 1; goback2 = 1; goback3 = 1; S_gender();}
			else if (text == '6')
			{ erchk = 0; Srun = 0; }
			else
			{ erchk = 1; errorcode = 1; }
		}
}

void PICK3::ui()
{
	while(Srun == 1)
	{
		system("CLS");
		title.borders("Manage Records");
		if(numpeople == 0)
		norecords();
		else
		listoption();
	}	
}

void Theme()
{
	while(1)
	{
	system("CLS");
	title.borders("SCREEN THEME");
	cout<<endl;
	int mnspd = error.ercde(erchk);
	if(erchk) error.ermsg(errorcode);
	
	cout<<"\t|"; animetext("Type 's' to switch theme", mnspd); cout<<" []: ";
	string modeS;
	modeS = inputerPLUS(1);
	
	if (modeS == "s" || modeS == "S")
	{
		if(lighter == 1)
		{ lighter = 0; system("COLOR F0");}
		else if(lighter == 0)
		{ lighter = 1; system("COLOR 0F");}
		storage.settings();
		break;
	}
	else
	{
		erchk = 1;
		errorcode = 1;
	}
	}
}

void Terms_Condition()
{
	system("CLS");
	title.borders("Terms and Condition");
	cout<<"\n\t|"; animetext("By using this program, we assume that you accept these terms and ", 7);
	cout<<"\n\t|"; animetext("conditions in full. Do not continue to use this program if you do not", 7);
	cout<<"\n\t|"; animetext("accept all of the terms and conditions stated on this page.", 7); cout<<"\n";
	cout<<"\n\t|"; animetext("Intellectual Property:", 7);
	cout<<"\n\t|"; animetext("All contents in this program are protected under copyright and shall",7);
	cout<<"\n\t|"; animetext("not be used to distribute illegally. ",7); cout<<"\n";
	cout<<"\n\t|"; animetext("Limitation of Liability:",7);
	cout<<"\n\t|"; animetext("This program is not responsible or liable in any manner for any user",7);
	cout<<"\n\t|"; animetext("generalized content.",7); cout<<"\n";
	cout<<"\n\t|"; animetext("Termination:",7);
	cout<<"\n\t|"; animetext("You are free to stop using the program. However, we serve the right ",7);
	cout<<"\n\t|"; animetext("to suspend or terminate your access to this program if you were found",7);
	cout<<"\n\t|"; animetext("not complying to these terms or if you use the program in a manner ",7);
	cout<<"\n\t|"; animetext("which could cause legal liability.", 7); cout<<"\n";
	cout<<"\n\t|"; animetext("Variation of Terms:",7);
	cout<<"\n\t|"; animetext("This program may revise the Terms occasionally. Therefore, we ask you",7);
	cout<<"\n\t|"; animetext("to check these Terms if an update has been made. By continuing on",7);
	cout<<"\n\t|"; animetext("using this program, you agree to the latest Terms.",7); cout<<"\n\n\t|";
	system("pause");
	
}

void AboutUs()
{
	system("CLS");
	title.borders("About Us");
	cout<<"\n\t|"; animetext("About The University:", 7);
	cout<<"\n\t|"; animetext("Harhard Del Luna University is a non-stock, non-profit, non-sectarian", 7);
	cout<<"\n\t|"; animetext("educational institution for men and women from tertiary level. In 2000,", 7);
	cout<<"\n\t|"; animetext("Yiee Ji-eun along with her group founded the institution. HDL", 7);
	cout<<"\n\t|"; animetext("University is located at Nicanor Reyes St, Sampaloc, Manila, 1008 Metro", 7);
	cout<<"\n\t|"; animetext("Manila", 7); cout<<"\n";
	cout<<"\n\t|"; animetext("About The Program", 7);
	cout<<"\n\t|"; animetext("The program aims to help medical practitioners to manage clinical", 7);
	cout<<"\n\t|"; animetext("information and student's health status so it will be easier for them", 7);
	cout<<"\n\t|"; animetext("to track down and observe the students.", 7); cout<<"\n";
	cout<<"\n\t|"; animetext("People Behind This Program", 6);
	cout<<"\n\t|"; animetext("Aries Aldrin Medina is a well known billionaire who founded the Wake", 6);
	cout<<"\n\t|"; animetext("Up \'Til Dawn Company, a place where group of famous programmers work", 6);
	cout<<"\n\t|"; animetext("together. Upon the call of one of the greatest university in Metro Manila,", 6);
	cout<<"\n\t|"; animetext("Mr. Medina decided to send his elite four programmers name: Jerowe Tan, the", 6);
	cout<<"\n\t|"; animetext("main programmer; Kristina Lister; Arianna Argana; and Miguel Pineda to", 6);
	cout<<"\n\t|"; animetext("develop a stable software. Through the effort of Medina\'s programmers, ", 6);
	cout<<"\n\t|"; animetext("they were able to create a simple yet strong software that can store ", 6);
	cout<<"\n\t|"; animetext("umerous data for learners health status. This software was built in year 2010,", 5);
	cout<<"\n\t|"; animetext("along with the rising demand in automated processing of data.", 5); cout<<"\n";
	cout<<"\n\t|"; animetext("Ackhowledgement", 5);
	cout<<"\n\t|"; animetext("The creation of this software would be NULL without the help of numerous", 4);
	cout<<"\n\t|"; animetext("people, especially Yiee Ji-eun for letting us integrate the software", 4);
	cout<<"\n\t|"; animetext("development in the campus. With also the support of the Mr. Medina's sponsors:", 4);
	cout<<"\n\t|"; animetext("C3 Duo, Republic of Gaymers\' Laptops, Wake Down Cafe and SML Entertainment, ", 4);
	cout<<"\n\t|"; animetext("for providing us the needs in the long run.", 4); cout<<"\n";
	cout<<"\n\t|"; animetext("Special Thanks to", 4);
	cout<<"\n\t|"; animetext("Shi Ryoojin, Catara, Eren Yogart, Levi Hackerman, Argana Grande, Kim Heechuu", 3);
	cout<<"\n\t|"; animetext("Libron Jeyms, Toshinori Gaya, Zone Malik, Lee Siyayun, Kim yuoin,", 3);
	cout<<"\n\t|"; animetext("Genie Kim, Ricardo Damilos, Hinata San, Miyawa Sakura, Joseph Calleja", 3);
	cout<<"\n\t|"; animetext("Deval Jin-Soul, Minato Sana, Kim Yare, Yuqi Sang, Kim Sihayon, emennems", 3);
	cout<<"\n\t|"; animetext("Hansel Vernon, Mahira P. Carry, John Cerena, Bong Stop, Bae Chuyon, Hayena.", 3);
	cout<<"\n\t|"; animetext("Bike Sotto, Wrap Monster, Sandara Parked, Yazara Atanasha, Paazamaki Narito", 3);
	cout<<"\n\t|"; animetext("Char Tzuyu, Mour Mina, Sett Ka, Uvuvwevwevwe Onyetenvewve Rosas, Taguro Saintpie", 3);
	cout<<"\n\t|"; animetext("and You.", 3); cout<<"\n\n\t|";
	system("pause");
}

void FHand::settings()
{
	Fstore.open("setting.txt");
	Fstore<<numpeople<<endl
		<<lighter<<endl;
	Fstore.close();
}
void FHand::updater()
{
	if(numpeople != 0)
	{
		Fedit.open("Printed_Records.txt");
		relink = profile;
		profile = start;
		Fedit<<"| DEL LUNA UNIVERSITY STUDENT HEALTH INFORMATION |"<<endl<<endl;
		while(profile != NULL)
		{
			Fedit<<"-----------------------------------------------------------"<<endl;
			Fedit<<"ID Number              []: "<<profile->idnumber<<endl;
			Fedit<<"Name                   []: "<<profile->full_name<<endl;
			Fedit<<"Year Level             []: "<<profile->SchoolYear<<endl;
			Fedit<<"Age                    []: "<<profile->age<<endl;
			Fedit<<"Gender                 []: "<<profile->gender<<endl;
			Fedit<<"Birthday               []: "<<profile->birthday<<endl;
			Fedit<<"Phone Number           []: "<<profile->cellphone_number<<endl;
			Fedit<<"Height                 []: "<<profile->height<<endl
				<<"Weight                 []: "<<profile->weight<<endl;
			Fedit<<"Address                []: "<<profile->address<<endl;				
			Fedit<<">Medical History"<<"\n\t"<<profile->medical_his<<endl;
			Fedit<<">Family Medical History"<<"\n\t"<<profile->family_med_his<<endl;
			Fedit<<">Medication History"<<"\n\t"<<profile->medical_his<<endl;
			Fedit<<">Treatment Histroy"<<"\n\t"<<profile->treatment_his<<endl;
			Fedit<<">Medical Directives"<<"\n\t"<<profile->med_directives<<endl<<endl;				
			profile = profile->link;
		}
		Fedit.close();
		
		Fstore.open ("data.txt");
		profile = start;
		while(profile != NULL)
		{
			Fstore<<profile->idnumber<<endl; //1
			Fstore<<profile->last_name<<endl //2
				<<profile->first_name<<endl  //3
				<<profile->middle_name<<endl //4
				<<profile->full_name<<endl;  //5
			Fstore<<profile->SchoolYear<<endl; //6
			Fstore<<profile->age<<endl;      //7
			Fstore<<profile->gender<<endl    //8
				<<profile->gender_binary<<endl; //9
			Fstore<<profile->birthday<<endl;   //10
			Fstore<<profile->cellphone_number<<endl;  //11
			Fstore<<profile->height<<endl  //12
				<<profile->weight<<endl;   //13
			Fstore<<profile->address<<endl          //14
				<<profile->house_number<<endl       //15
				<<profile->Barangay<<endl           //16
				<<profile->city_municipality<<endl  //17
				<<profile->postal_code<<endl        //18
				<<profile->Province<<endl           //19
				<<profile->Country<<endl;           //20
			Fstore<<profile->medical_his<<endl      //21
				<<profile->family_med_his<<endl     //22
				<<profile->medication_his<<endl     //23
				<<profile->treatment_his<<endl 		//24
				<<profile->med_directives<<endl;    //25
				
			profile = profile->link;
		}
		Fstore.close();	
		profile = relink;
	}
	else
	{
	Fstore.open("data.txt");
	Fstore<<EOF;
	Fstore.close();
	Fedit.open("Printed_Records.txt");
	Fedit<<EOF;
	Fedit.close();
	}
			
	Fstore.open("setting.txt");
	Fstore<<numpeople<<endl
		<<lighter<<endl;
	Fstore.close();
}

void FHand::LoadFiles()
{
	Freboot.open("setting.txt");
	int numloop(0), peeps(0), theme(0), rotate(0);
	string tmpS;
	char tmpC[500];
	int tmpI;
	while(getline (Freboot, tmpS))
	{
		strcpy(tmpC, tmpS.c_str());
		tmpI = atoi(tmpC);
		if(numloop == 0)
		peeps = tmpI;
		else if(numloop == 1)
		theme = tmpI;
		numloop++;
	}
	lighter = theme;
	numpeople = peeps;
	Freboot.close();
	if(lighter == 0)
	system("COLOR F0");
	else if(lighter == 1)
	system("COLOR 0F");
	
	
	Freboot.open("data.txt");
	for(int i(0); i < peeps; i++)
	{
		profile = new STUDENTINFO;
		for(int k(1); k <= 25; k++)
		{
			getline(Freboot, tmpS);
			strcpy(tmpC, tmpS.c_str());
			
			if(k == 1)
			{ tmpI = atoi(tmpC); profile->idnumber = tmpI;}
			else if(k == 2)
			profile->last_name = tmpS;
			else if(k == 3)
			profile->first_name = tmpS;
			else if(k == 4)
			profile->middle_name = tmpS;
			else if(k == 5)
			profile->full_name = tmpS;
			else if(k == 6)
			profile->SchoolYear = tmpS;
			else if(k == 7)
			{tmpI = atoi(tmpC); profile->age = tmpI; }
			else if(k == 8)
			profile->gender = tmpS;
			else if(k == 9)
			{tmpI = atoi (tmpC); profile->gender_binary = tmpI;}
			else if(k == 10)
			profile->birthday = tmpS;
			else if(k== 11)
			profile->cellphone_number = tmpS;
			else if(k== 12)
			{tmpI = atoi(tmpC); profile->height = tmpI;}
			else if(k== 13)
			{tmpI = atoi(tmpC); profile->weight = tmpI;}
			else if(k== 14)
			profile->address = tmpS;
			else if(k== 15)
			profile->house_number = tmpS;
			else if(k== 16)
			profile->Barangay = tmpS;
			else if(k== 17)
			profile->city_municipality = tmpS;
			else if(k== 18)
			profile->postal_code = tmpS;
			else if(k== 19)
			profile->Province = tmpS;
			else if(k== 20)
			profile->Country = tmpS;
			else if(k== 21)
			profile->medical_his = tmpS;
			else if(k== 22)
			profile->family_med_his = tmpS;
			else if(k== 23)
			profile->medication_his = tmpS;
			else if(k== 24)
			profile->treatment_his = tmpS;
			else if(k== 25)
			profile->med_directives = tmpS;
			profile->link = NULL;
		}
		if(i == 0)
		{
			start = profile;
			end = profile;
		}
		else
		{
			end->link = profile;
			end = profile;
		}
	}
	Freboot.close();
}

void EndOfTheLine()
{
	system("CLS");
	title.borders("THANK YOU FOR USING THE PROGRAM");
	cout<<"\n\n\n\n\n\t|";
	system("pause");
	fire_exit = 0;
}
