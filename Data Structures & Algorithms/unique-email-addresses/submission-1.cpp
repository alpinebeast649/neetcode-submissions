class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int length = emails.size();
        unordered_set<string>em;
        string email = "";
        for(int i = 0; i < length; i++) {
            email = emailConverter(emails[i]);
            //cout << email << endl;
            if(em.count(email)) {
                continue;
            }
            em.insert(email);
        }
        return em.size();
    }
    string emailConverter(string email) {
        string ans = "";
        int len = email.length();
        int at = 0;
        for(int i = 0; i < len; i++) {
            if(email[i] == '@') {
                at = i;
                break;
            }
        }
        for(int i = 0; i < at; i++) {
            if(email[i] == '.') {
                ans = ans;
            } else if (email[i] != '+') {
                ans += email[i];
            } else {
                break;
            }
        }
        for(int j = at; j < len; j++) {
            ans += email[j];
        }
        return ans;
    }
};