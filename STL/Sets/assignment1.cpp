#include<iostream>
#include<set>
using namespace std;

class Score
{
    private :
       int runs;
       int wickets;
       
    public :

        Score(int runs,int wickets)
        {
            this->runs=runs;
            this->wickets=wickets;
        }
    int getruns()
    const{
        return runs;
    }
    int getwickets()
    
    const{
        return wickets;
    }
    void display() const {
        cout << "Runs: " << runs << ", Wickets: " << wickets << endl;
    }
};
struct comparebyruns//comparator as functor
{
    bool operator()(const Score* s1,const Score* s2)
 const{
         return s1->getruns()>s2->getruns();
    }
};
struct comparebywickets
{
    bool operator()(const Score* s1,const Score* s2)
    const{
         return s1->getwickets()<s2->getwickets();
    }
};
class Setscore
{
    set<Score*,comparebyruns>scorebyruns;//name used by us is the scorebyruns
    set<Score*,comparebywickets>scorebywickets;//name used by score by the scorewickets
    public:
         void addscore(Score* s)
         {
            scorebyruns.insert(s);
            scorebywickets.insert(s);
         }
         void displaybyruns()
         {
            for(auto x:scorebyruns)
            {
                x->display();
            }
         }
         void displaybywickets()
         {
            for(auto x:scorebywickets)
            {
                x->display();
            }
         }


};
int main()
{
   Setscore *s=new Setscore();
   s->addscore(new Score(250,3));
    s->addscore(new Score(180, 6));
    s->addscore(new Score(300, 2));
    s->addscore(new Score(150, 5));
    cout<<"\n sorted runs in descending order"<<endl;
    s->displaybyruns();
   
     cout<<"\n sorted wickets in descending order"<<endl;
    s->displaybywickets();
    return 0;

}
