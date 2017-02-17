#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> transformWords(const vector<string>& words);
void transformWordVector(vector<string>& words);

int main() {

  vector<string> words = { "abc","ijk","xyz" };
  vector<string> transformed;

  transformed = transformWords(words);
  transformWordVector(words);

  return 0;
}

vector<string> transformWords(const vector<string>& words) {
  vector<string> tempWords;

  for (int i = 0; i < words.size(); ++i) {
    string temp = "";
    for (int j = 0; j < words[i].length(); ++j) {
      temp += words[j][i];
    }
    tempWords.push_back(temp);
  }

  return tempWords;
}

void transformWordVector(vector<string>& words) {
  vector<string> tempWords;

  for (int i = 0; i < words.size(); ++i) {
    string temp = "";
    for (int j = 0; j < words[i].length(); ++j) {
      temp += words[j][i];
    }
    tempWords.push_back(temp);
  }
  words = tempWords;
}