class rectangle
{
int length, width;
public:
rectangle(){ //Constructor
length=0;
width=0;
cout<<”Constructor Called”;
}
~rectangle() //Destructor
{
cout<<”Destructor Called”;
}
// other functions for reading, writing and processing can be written here
}; 
int main()
{
rectangle x;
// default constructor is called
}