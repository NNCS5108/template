#include   "bits/stdc++.h"

//#include       <ext/pb_ds/assoc_container.hpp>
//#include       <ext/pb_ds/tree_policy.hpp>


/* -------------------------------------------------------------------------------------*/

/*             BEGIN               */


using namespace std;

//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
/* ordered_set : order_of_key(k) count_num_element < k
                 find_by_order(k) K-th element in set  */   

// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

  //Input Output
  #define        io(x)   if (fopen(x".inp", "r")){ freopen(x".inp","r",stdin),freopen(x".out","w",stdout);}
  #define fast cin.tie(NULL)->sync_with_stdio(false); cout.tie(NULL);
  #define inp freopen("nncs.inp","r",stdin);
  #define out freopen("nncs.out","w",stdout);
  #define el "\n"

  //Time
  #define unlock clock_t tStart = clock()
  #define TIME (1.0 * clock() / CLOCKS_PER_SEC)
  #define time cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl

  // Pair Map
  #define fi first
  #define se second
  #define mp3 map<ll,ll>
  #define mib map<ll, bool>
  #define mc map<char,ll>

  //Vector or String
  #define all(v) v.begin(), v.end()
  #define pb push_back
  #define sz(s) (int)s.size()

  //Num
  #define gcd __gcd
  #define lb lower_bound
  #define ub upper_bound
  #define bit(mask, i) ((mask >> i) & 1)

  // memset
  #define mem(v,so) memset(v,so,sizeof(v));

  //using
  using ll = long long;
  using ull= unsigned long long;
  using it = int;
  using pl = pair<ll,ll>;
  using pi = pair<it,it>;

  //Lim
  const it N = (int)1e6+5;
  const it MaxN = (int)2e5+5;
  const ll mod = (ll)1e9+7;
  const ll maxn = (int)1e7+5;
  const ll oo = (ll)1e18;

  // template min, max

  template<class A,class B> inline bool _min(A &a,B b) { return (b < a) ? a = b, 1:0; };
  template<class A,class B> inline bool _max(A &a,B b) { return (b > a) ? a = b, 1:0; };

  inline void add(it &x, const it &y) { 
    x += y;
    if (x >= mod) x -= mod;
   }

   inline void mul(it &x, const it &y) { 
    x *= y;
    if (x >= mod) x %= mod;
   }

   inline void sub(it &x, const it &y) { 
    x -= y;
    if (x < 0) x += mod;
   }


  ll sqr(ll a) {  return (a)*(a);  }
  ll lcm(ll a, ll b) {  return (a) / (gcd(a,b)) * (b) ; }

//  8 : int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//  4 : int dx[] = {-1 , 0 , 1 , 0}  ; int dy[] = {0 , 1 , 0 , -1} ;

  /*              -END-               */



   /*-----------------------------------------------------------------------------------*/

/* [~~ Nguyen Ngoc Cao Sang <VNG High School for Gifted Student> ~~] */




                                /*~~~~~~ Code: ~~~~~~*/





const bool Multi = true;




void runcase() {
 
                    
}

signed main() {

     fast
    #ifndef ONLINE_JUDGE

       inp
       out
      
    #endif





         // io("") ;

    



     if (Multi) {

           runcase();

     } else {

          it test;   cin >> test;

          while (test--) {

                runcase();

          }
     }

     
    cerr << "Time elapsed: " << TIME << "s.\n";
    cerr << "Nguyen Ngoc Cao Sang" << "\n";
}