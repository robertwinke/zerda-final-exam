#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> transformWords(const vector<string>& words) throw(const char*);
void transformWordVector(vector<string>& words) throw(const char*);
bool hasSameLengthWords(const vector<string>& words);

int main() {

  vector<string> words = { "abc","ijk","xyz" };
  vector<string> transformed;
  try {
    transformed = transformWords(words);
    transformWordVector(words);
  }
  catch (const char* err) {
    cerr << err;
  }
  return 0;
}

vector<string> transformWords(const vector<string>& words)  throw(const char*) {
  if (!hasSameLengthWords(words)) {
    throw "words are not the same length!";
  }
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

void transformWordVector(vector<string>& words)  throw(const char*) {
  if (!hasSameLengthWords(words)) {
    throw "words are not the same length!";
  }
  words = transformWords(words);
}

bool hasSameLengthWords(const vector<string>& words) {
  bool isSameLength = true;
  for (int i = 0; i < words.size() - 1; ++i) {
    if (words[i].length() != words[i + 1].length()) {
      isSameLength = false;
    }
  }
  return isSameLength;
}