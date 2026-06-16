#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Flashcard {
    string korean;
    string english;
};
int main() {
    vector<Flashcard> cards;
    Flashcard f1; f1.korean="사과"; f1.english="apple"; cards.push_back(f1);
    Flashcard f2; f2.korean="학교"; f2.english="school"; cards.push_back(f2);
    Flashcard f3; f3.korean="물"; f3.english="water"; cards.push_back(f3);
    Flashcard f4; f4.korean="수영장"; f4.english="swimming pool"; cards.push_back(f4);
    cards.push_back({"바나나","banana"}); cards.push_back({"우유","milk"});
    cards.push_back({"빵","bread"}); cards.push_back({"밥","rice"});
    cards.push_back({"병원","hospital"}); cards.push_back({"도서관","library"});
    cards.push_back({"공원","park"}); cards.push_back({"시장","market"});
    cards.push_back({"친구","friend"}); cards.push_back({"가족","family"});
    cards.push_back({"선생님","teacher"}); cards.push_back({"학생","student"});
    cards.push_back({"컴퓨터","computer"}); cards.push_back({"핸드폰","mobile phone"});
    cards.push_back({"인터넷","internet"}); cards.push_back({"프로그램","program"});
    cards.push_back({"하늘","sky"}); cards.push_back({"바다","sea"});
    cards.push_back({"산","mountain"}); cards.push_back({"꽃","flower"});
    cards.push_back({"공부","study"}); cards.push_back({"숙제","homework"});
    cards.push_back({"시험","exam"}); cards.push_back({"연필","pencil"});
    cards.push_back({"책","book"}); cards.push_back({"버스","bus"});
    cards.push_back({"지하철","subway"}); cards.push_back({"자동차","car"});
    cards.push_back({"비행기","airplane"}); cards.push_back({"기차","train"});
    cards.push_back({"날씨","weather"}); cards.push_back({"비","rain"});
    cards.push_back({"눈","snow"}); cards.push_back({"바람","wind"});
    cards.push_back({"태양","sun"}); cards.push_back({"먹다","to eat"});
    cards.push_back({"마시다","to drink"}); cards.push_back({"자다","to sleep"});
    cards.push_back({"읽다","to read"}); cards.push_back({"쓰다","to write"});
    cards.push_back({"크다","big"}); cards.push_back({"작다","small"});
    cards.push_back({"빠르다","fast"}); cards.push_back({"느리다","slow"});
    cards.push_back({"예쁘다","pretty"}); cards.push_back({"좋다","good"});
    int score = 0;
    for (int i = 0; i < cards.size(); i++) {
        string guess;
        cout << "\nKorean: " << cards[i].korean << endl;
        cout << "Your answer: ";
        cin >> guess;
        if (guess == cards[i].english) { cout << "Correct!" << endl; score++; }
        else { cout << "Wrong! Answer was: " << cards[i].english << endl; }
    }
    cout << "\nYour score: " << score << "/" << cards.size() << endl;
    return 0;
}
