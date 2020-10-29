package credit;

public class AmountInWords {
    // data member
    int amount = 0;
    int temp = 0;
    // method to get amount from the user
    public void getAmount(int amount) {
        this.amount = amount;
    }

    // method to display the amount 
    public void displayAmount() {
        int num;
        String word = "";
        // units
        String[] units = new String[] {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        // tens
        String[] tens = new String[] {"zero","ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

        while (amount != 0) {
            if (amount == 10000) {    // lakhs
                word = "one lakh";
                break;
            }
            if (amount < 100000 && amount >= 1000) {    // thousand
                if (amount < 100000 && amount >=10000) {
                    word += tens[amount/10000];
                    word += " ";
                    amount = amount % 10000;
                    if (amount == 0) {
                        word += " thousand ";
                    }
                }
                if (amount < 10000 && amount >= 1000) {
                    word += units[amount/1000];
                    word += " thousand ";
                    amount = amount % 1000;
                }
            }
            if (amount<1000 && amount >=100) {    // hundreds
                word += units[amount/100];
                word += " hundred ";
                amount = amount % 100;
            }
            if (amount == 0) {    // check for zero
                break;
            }
            if (amount < 100) {    // tens
                if (amount < 20) {
                    word += units[amount%100];
                    word += " ";
                    amount = amount / 100;
                } else {
                    word += tens[amount/10];
                    word += " ";
                    amount = amount%10;
                }
            }
        }
        System.out.println(word);
    }
}
