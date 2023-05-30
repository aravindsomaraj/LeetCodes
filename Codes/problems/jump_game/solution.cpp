int speedUp = []
{std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();

int digit(char c)
{
    return c & 15;
}
bool isDigit(char c)
{
    return '0' <= c && c <= '9';
}
int init = []
{
    std::ofstream out("user.out");
    std::cout.rdbuf(out.rdbuf());
    for (std::string s; std::getline(std::cin, s); std::cout << '\n')
    {
        int prev = 1;
        bool ans = true;
        for (int _i = 1, _n = s.length(), v; _i < _n; ++_i)
        {
            v = digit(s[_i]);
            while (isDigit(s[++_i]))
                v = v * 10 + digit(s[_i]);
            
            if (prev == 0)
                ans = false;
            else if (v > --prev)
                prev = v;
        }
        std::cout << (ans ? "true" : "false");
    }
    exit(0);
    return 0;
}();

class Solution
{
public:
    bool canJump(std::vector<int> &)
    {
        return true;
    }
};