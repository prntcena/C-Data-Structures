class Transaction
{   
    public:
    string personName;
    int transactionTime;
    int transactionAmount;
    string transactionCity;

    //contructor
    Transaction(string name, int time, int amount, string city)
    {
        this->personName = name;
        this->transactionTime = time;
        this->transactionAmount = amount;
        this->transactionCity = city;
    }
};
class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        int numTransactions = transactions.size();
        vector<bool> isValid(numTransactions,true);
        vector<Transaction> inputTransactions;

        //extraction of information
        for(int i=0;i<numTransactions;i++)
        {
            string currTransaction = transactions[i];
            string name = "", time = "", amount = "", city = "";
            int j=0;

            //name
            while(currTransaction[j]!=',')
            {
                name+=currTransaction[j++];
            }
            j++;
            //time
            while(currTransaction[j]!=',')
            {
                time+=currTransaction[j++];
            }
            j++;
            //amount
            while(currTransaction[j]!=',')
            {
                amount+=currTransaction[j++];
            }
            j++;
            //city
            while((j<currTransaction.size()) and (currTransaction[j]!=','))
            {
                city+=currTransaction[j++];
            }

            //create new object of transaction
            Transaction newTransaction(name, stoi(time), stoi(amount), city);
            inputTransactions.push_back(newTransaction); 
        }

        //Amount check in transaction amt > 1000
        for(int i=0l;i<inputTransactions.size();i++)
        {
            if(inputTransactions[i].transactionAmount>1000)
            isValid[i] = false;
        }

        //pair wise check
        for(int i=0;i<inputTransactions.size();i++)
        {
            for(int j=0;j<inputTransactions.size();j++)
            {
                if(i==j)
                    continue;
                    int timeDiff = abs(inputTransactions[j].transactionTime - 
                    inputTransactions[i].transactionTime);
                    if(timeDiff <=60)
                    {
                        if((inputTransactions[j].personName == inputTransactions[i].personName ) && (inputTransactions[j].transactionCity!=inputTransactions[i].transactionCity))
                        {
                            isValid[i] = false;
                            isValid[j] = false;
                        }
                    }
            }
        }
            //add invalid transactions to the answer
            vector<string> invalidTransactions;
            for(int i=0;i<inputTransactions.size();i++)
            {
                if(!isValid[i])
                    invalidTransactions.push_back(transactions[i]);
            }

            return invalidTransactions;
    }
};
