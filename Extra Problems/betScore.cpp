// Exercise that was featured in a past exam

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void score(const vector<int> &aposta, const vector<int> &chave)
{
    int score = 0;
    for (size_t i = 0; i < aposta.size() - 2; i++)
    {
        for (size_t j = 0; j < chave.size() - 2; j++)
        {
            if (aposta[i] == chave[j])
            {
                score++;
            }
        }
    }

    for (size_t i = aposta.size()-2; i < aposta.size(); i++)
    {
        for (size_t j = aposta.size()-2; j < chave.size(); j++)
        {
            if (aposta[i] == chave[j])
            {
                score++;
            }
        }
    }

    cout << "Total Score: " << score << endl;
}


int main()
{
    vector<int> aposta = {1, 7, 21, 36, 37, 2, 5};
    vector<int> chave = {1, 5, 27, 36, 40, 3, 5};
    score(aposta, chave);
    return 0;
}