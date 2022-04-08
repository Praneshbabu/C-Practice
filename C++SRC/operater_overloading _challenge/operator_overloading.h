#include<iostream>
#include<cstring>

class Mystring
{
    friend bool operator==(const Mystring&lhs,const Mystring&rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs); 
    friend bool operator>(const Mystring&lhs,const Mystring&rhs);
    friend bool operator<(const Mystring&lhs,const Mystring&rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator +(const Mystring&lhs,const Mystring&rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream&in, Mystring&rhs);
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);

    private:
    char *str;
    public:
    Mystring();
    Mystring(const char *s);

    // declaring Prototypes
    Mystring(const Mystring &source); //copy constructor
    Mystring( Mystring &&source);   //move constructor
    ~Mystring();
    Mystring &operator=(const Mystring &rhs); //copy Assignment
    Mystring&operator=(Mystring&&rhs); //move Assignment.

    void display() const;
    int get_lenth()const;
    const char *get_str()const;

};
//No args Constructor
    Mystring::Mystring()
     : str{nullptr} {
        str=new char[1];
        *str='\0';
    }

    //overloaded constructor
Mystring::Mystring(const char *s)
    : str {nullptr}{
        if(s==nullptr){
            str=new char[1];
            *str='\0';

        }else{
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }

    //copy constructor
    Mystring::Mystring(const Mystring&source)
        :str{nullptr}{
            str=new char[strlen(source.str)+1];
            strcpy(str,source.str);
            std::cout<<"COPY CONSTRUCTOR IS USED"<<std::endl;
        }

    //move constructor
        Mystring::Mystring( Mystring&&source)
            :str(source.str){
                source.str=nullptr;
                std::cout<<"MOVE CONSTRUCTOR IS USED"<<std::endl;
            }

 //Destructor
Mystring::~Mystring(){
 delete[]str;
// std::cout<<"destructor is called"<<std::endl;
 }

    // copy Assignment
    Mystring &Mystring::operator=(const Mystring &rhs){
            std::cout<<"Using copy Assignment "<<std::endl;

        if(this==&rhs);
        return*this;
        delete[]str;
        str=new char[strlen(rhs.str)+1];
        strcpy(str,rhs.str);
        return*this;
    }
    //Move Assignment
    
    Mystring&Mystring::operator=(Mystring&&rhs){
            std::cout<<"Using move Assignment "<<std::endl;
        if (this==&rhs)
        return*this;
       delete[]str;
        str=rhs.str;
        rhs.str=nullptr;
        return*this;

    }
    //DIsplay Function
    void Mystring::display()const{
        std::cout<<str<<" : "<<get_lenth()<<std::endl;
    
    }
    int Mystring::get_lenth()const{
        return strlen(str);
    }    
    const char *Mystring::get_str() const{
        return str;
    }
    //Equal
    bool operator==(const Mystring&lhs,const Mystring&rhs){
        return (std::strcmp(lhs.str, rhs.str)==0);
    }
    //Not equal
    bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return !(std::strcmp(lhs.str, rhs.str) == 0);
}
    //greater than
    bool operator>(const Mystring&lhs,const Mystring&rhs){
        return(std::strcmp(lhs.str,rhs.str)>0);
    }
    //lesser that
    bool operator<(const Mystring&lhs,const Mystring&rhs){
        return(std::strcmp(lhs.str,rhs.str)<0);
    }
    //change to lowercase
    Mystring operator-(const Mystring &obj ){
        char *buff =new char[std::strlen(obj.str)+1];
        std::strcpy(buff,obj.str);
        for(size_t i=0;i<std::strlen(buff);i++)
        buff[i]=std::tolower(buff[i]);
        Mystring temp{buff};
        delete [] buff;
        return temp;
    }
    //overload insertion operator
    std::ostream&operator<<(std::ostream &os,const Mystring &rhs){
        os<<rhs.str;
        return os;
    }
    //overload extersion operator
    std::istream&operator>>(std::istream&in,Mystring&rhs){
        char *buff=new char[1000];
        in>>buff;
        rhs=Mystring{buff};
        delete[]buff;
        return in;
    }
    //concatenation
    Mystring operator+(const Mystring&lhs,const Mystring&rhs){
        char*buff=new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
        std::strcpy(buff,lhs.str);
        std::strcpy(buff,rhs.str);
        Mystring temp{buff};
        delete[]buff;
        return temp;
    }

    //concat and assign
    Mystring &operator +=(Mystring&lhs,const Mystring&rhs){
        lhs=lhs+rhs;
        return lhs;
    }