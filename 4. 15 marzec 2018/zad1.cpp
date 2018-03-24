class User {
	private:
		string login, password;
    public:
    	void User(string s1, string s2) {
    		this->login = s1;
    		this->password = s2;
    	}
    	bool authorize(string s1, string s2) {
    		if(this->login == s1 && this->password == s2)
    			return true;
            return false;
    	}
};
