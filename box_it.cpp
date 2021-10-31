#include<bits/stdc++.h>
using namespace std;

class Box{

private:
    int l,b,h;

public:
  Box()
  {
      l=0, b=0, h=0;
  }
  Box(int l, int b, int h)
  {
      this->l=l;
      this->b=b;
      this->h=h;
  }
  Box(Box& B)
  {
      this->l=B.l;
      this->b=B.b;
      this->h=B.h;
  }
  int getLength()
  {
      return l;
  }
  int getBreadth()
  {
      return b;
  }
  int getHeight()
  {
      return h;
  }
  long long CalculateVolume()
  {
      long long vol= l* b* h;
      return vol;
  }
  bool operator < (Box B)
  {
      Box temp;
      temp.l=this->l;
   //   cout<<B.l<<" "<<temp.l;
      if((temp.l==B.l) || (temp.b<B.b && temp.l==B.l) || (temp.h<B.h && temp.b==B.b && temp.l==B.l))
      {
           return true;
      }
      return false;
  }
  friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};


int main()
{
    Box b1(10,5,4);
    Box b2(9,4,8);
    bool x=b1<b2;
    cout<<b2;
    //cout<<b2.CalculateVolume();


}

