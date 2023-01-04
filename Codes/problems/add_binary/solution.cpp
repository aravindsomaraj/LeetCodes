class Solution {
public:
    string addBinary(string a, string b) {

        string ab="";
        int an = a.size();
        int bn = b.size();

        int aj = an-1;
        int bj = bn-1;
        int c=0,p=0,s=0;
        while(aj>=0 && bj>=0)
        {
            int ac = a[aj--]-'0';
            int bc = b[bj--]-'0';
            ab = to_string((ac^bc)^c) + ab;
            c = (ac&bc) | ((ac|bc)&c);
            cout << c << endl;
        }
        while(aj>=0)
        {
            int ac = a[aj--]-'0';
            ab = to_string(ac^c) + ab;
            c  = ac&c;
        }
        while(bj>=0)
        {
            int bc = b[bj--]-'0';
            ab = to_string(bc^c) + ab;
            c  = bc&c;
        }
        if(c!=0)
            return "1"+ab;
        else
            return ab;
    }
};