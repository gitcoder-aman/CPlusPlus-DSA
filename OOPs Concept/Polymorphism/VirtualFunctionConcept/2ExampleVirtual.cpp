#include<iostream>
using namespace std;

class CWH{

    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title = s;
            rating = r;
        }
    virtual void display(){ // when virtual removed this function then this display function will be exute.   
         cout << "Bogus code:"<< endl;
     }
};
class CWHVideo : public CWH{

    float videoLength;
    public:
        CWHVideo(string s,float r,float vl) : CWH(s,r){
            videoLength = vl;
        }
        void display(){
            cout << "This is an amazing video with title "<< title << endl;
            cout << "Rating: "<< rating << " out of 5 stars "<< endl;
            cout << "Length of this video is : "<< videoLength <<" minutes"<< endl;
        }
};
class CWHText : public CWH{

    int words;
    public:
        CWHText(string s,float r,int wc) : CWH(s,r){
            words = wc;
        }
        void display(){
            cout << "This is an amazing text tutorial with title "<< title << endl;
            cout << "Rating of this text tutorial: "<< rating << " out of 5 stars "<< endl;
            cout << "No of words in this text tutorial is : "<< words <<" words"<< endl;
        }
};
int main(){

    string title;
    float rating,vlen;  //video length;
    int words;

    //for code with harry video
    title =  "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title,rating,vlen);
   // djVideo.display();

     cout << endl;
   // for code with harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title,rating,words);
    //djText.display();

    cout << endl<< "show through pointer "<<endl;
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0] -> display();
    cout << endl;
    tuts[1] -> display();
    return 0;

}