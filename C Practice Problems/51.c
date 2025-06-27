#include <stdio.h>
void counter()
{
  static int count = 0;
  count++;
  printf("%d ", count);
}

int main()
{
  counter();
  counter();
  counter();
  return 0;
}
/* ❓ What will be the output?
A. 1 1 1
B. 1 2 3
C. 0 1 2
D. 0 0 0

✅ Correct Answer: B. 1 2 3

📘 Detailed Explanation:
static variable inside a function keeps its value between calls.

It is initialized only once, then retains its value.

So each time counter() is called, count increases and prints.

🧠 Concepts to Learn:

Use static to retain values across function calls.

static variables are stored in data segment, not stack.

✅ Output: 1 2 3 */


Alright! Let’s imagine you’re hungry and want to order a pizza. Now let’s use that whole experience to understand APIs (Application Programming Interfaces) in the simplest way possible.

🍕 Real-World Scenario:
You're sitting at your table in a restaurant. You don’t go into the kitchen to make your own pizza—you don’t even talk directly to the chef. You look at the menu, pick what you want, and call the waiter.

You = The client (like a mobile app or website)

The kitchen = The server (where all the logic, data, and pizza magic happens)

The menu = API documentation (shows you what you can ask for)

The waiter = The API itself!

So What Does the API Do?
You tell the waiter what you want – “I want a large cheese pizza with extra olives.”

The waiter takes your order (your request) to the kitchen (server).

The kitchen prepares the pizza (processes your request).

The waiter brings the pizza back to you – neatly packed and ready to eat.

➡️ You don’t know how the kitchen made it.
➡️ You don’t need to.
➡️ You just made a request and got a response.

🍕 Tech Analogy:
Let’s say you open a food delivery app like Swiggy or Zomato.

You press a button to order a pizza → Your request (like an API call)

The app talks to the pizza shop’s server using an API → “POST /order”

The server confirms → Response: "Your pizza will arrive in 30 minutes!"

Key API Concepts in Pizza Form:
API Term	Pizza Analogy
Client	You (ordering pizza)
Server	Kitchen (where pizza is made)
API	Waiter (who carries your request and response)
Endpoint	Specific item on the menu ("GET /pizza/margherita")
Request	“I want a large pepperoni pizza”
Response	The pizza being delivered
JSON	Pizza in a box (data in a structured format)

Bonus 🍕 JSON Example:
Here’s how the waiter (API) might send your pizza in tech language:

json
Copy code
{
  "pizza": {
    "size": "Large",
    "toppings": ["Cheese", "Olives", "Tomatoes"],
    "crust": "Thin"
  },
  "estimatedDelivery": "30 minutes"
}
So next time you’re eating pizza, just remember—you’re basically using a real-life API without even realizing it.

Want to see how you can build your own pizza-ordering API with code? 😄