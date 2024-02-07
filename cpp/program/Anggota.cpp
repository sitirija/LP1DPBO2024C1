//Import library
#include <iostream>
#include <string>

//Using standard namespace
using namespace std;

//class declaration. for C++, the first letter doesn't have to be
//capitalized, but it's better so we can distinguish it with the other types.
class Anggota{
    //private attributes.
    private:
        // int id;
        string name;
        string bidang;
        string partai;

    //public methods.
    public:
        /* Constructors.*/

        //constructor. The note that it doesn't have any return type.
        Anggota(){
            //set name and gender to default value.
            // this->id = 0;
            this->name = "";
            this->bidang = '-';
            this->partai = '-';
        }

        //Another constructor
        //
        Anggota(string name, string bidang, string partai){
            //"This" object'a attributes will be set with the given parameter attributes.
            // this->id = id;
            this->name = name;
            this->bidang = bidang;
            this->partai = partai;
        }

        /* Getter and Setter. */

        // //Get id.
        // int get_id(){
        //     return this->id;
        // }

        // //Set id.
        // void set_id(int id){
        //     this->id = id;
        // }

        //Get name.
        string get_name(){
            return this->name;
        }

        //Set name.
        void set_name(string name){
            this->name = name;
        }

        //Get bidang.
        string get_bidang(){
            return this->bidang;
        }

        //Set bidang.
        void set_bidang(string bidang){
            this->bidang = bidang;
        }

        //Get partai.
        string get_partai(){
            return this->partai;
        }

        //Set partai.
        void set_partai(string partai){
            this->partai = partai;
        }

        /*Public methods, or in this case if you prefer, "behaviors".*/
        //Anggota eats.
        void eat(){
            cout << this->name << " is eating! " << '\n';
        }

        //Anggota sleep
        void sleep(){
            cout << this->name << " is sleeping! " << '\n';
        }

        /* Destructors*/
        //Default destructor. leave it blank for now.
        ~Anggota(){
            
        }
};