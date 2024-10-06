# Supercharge your Productivity: Enhance Software Development Lifecycle with GitHub Copilot.
### Contributor: Lisa Do, Anshika Gupta

## Instruction on downloading Visual Studio Code
- Download Visual Studio Code for your operating system at [aka.ms/vscode](https://aka.ms/vscode)

## Instruction on activating GitHub Copilot trial
- If you are a student, you can get access to GitHub Copilot for free as it is included in the GitHub Student Developer Pack.
    - To apply for the GitHub Student Developer Pack, go to [aka.ms/githubstudentpack](https://aka.ms/githubstudentpack).
 
- Instruction on claiming GitHub Copilot Coupon (non-student):
    - Create an account on [GitHub](https://github.com/) if you haven't already
    - Go to https://github.com/redeem/cfp-XXXXXX (To be added prior to the conference)
    - At the page, fill your address. It will not ask for a Credit Card.
    - Once the form is filled in, click Save.
    - On the next page, click the Redeem button.
    - Next, go to https://gh.io/copilot-free
    - Click 'Get access to GitHub copilot'
    - Pick the settings what you need and Click save and get started.
    - Congrats, Done!!! 

- Install the Copilot extension in Visual Studio Code using the link: https://docs.github.com/copilot/using-github-copilot/using-github-copilot-code-suggestions-in-your-editor?tool=vscode

## Prompts we are using today
**Quest 1: Discover the Secrets Behind the Magic Function in Your Code!**
- Provide a brief summary of what magicFunction() does.
- Summarize what this program does.
- (Bonus) What functionalities can a user uses in this program?

**Quest 2: Solve the Mystery and Complete the Pending Booking Function!**
- Prompt #3: Implement listAvailableRooms() that list all rooms which are not currently booked.
- Paste this comment on line 18: \
  **// Generate a new tuple to store guest names, the number of guests they are bringing and whether they have paid**
- (Ctrl+I/Cmd+I) Write function cancelBooking
- Bonus Prompt#1 -Once you compile and run into a compiling error, you will see an error message: <error details>. Explain this error and how to fix it.
- Bonus Prompt#2 -  As a hotel, you want to check if the weather this weekend is good. If it’s sunny, you can increase your price, if it’s rainy, you give a discount. 
Try this prompt: 
**Write a function that takes a date as input. This function will make an HTTP request to OpenWeather API to get weather data then output whether you should raise price or give a discount. The output is a string. **

**Quest 3: Writing Test Cases!**
- Can you help generate unit tests for function listAvailableRooms()?
- What are some edge cases I should consider for function cancelBooking()?
- (Bonus) Write unit tests for function bookRoom(). The unit tests should be using the naming pattern Function_ShouldXXX_WhenXXX. Ensure that extractRoomName() is called at least once and assert that guestInfo is not null.
  
**Quest 4: Level Up: Add Documentation!**
- Write a detailed comment that describe what bookRoom() does, and documents the inputs and output of the function.
- (Bonus #1) Provide a documentation for the hotel management system intended for user. Describe its main features such as room booking, canceling bookings, viewing bookings, checking in/out guests, and listing available rooms.
- (Bonus #2) Write a one-liner comment that describes what the bookRoom() function does.

**Quest 5: Elevate Your Code with Expert Feedback!**
- Pretend to be a senior engineer, what improvements can be made on the function listAvailableRooms().
- (Bonus) Pretend to be a senior engineer and review the following code for a hotel management system. Please provide feedback on the completeness, correctness, and efficiency of the code.

## Tips for Crafting Effective Prompts for Copilot
- Clarity and Specificity
- Iterative Improvement
- Combine Concepts
- Explore Documentation


## Survey link
https://aka.ms/ghc-survey
TODO: Verify survey link

## After the workshop, here are some helpful links: 
- https://docs.github.com/en/copilot/quickstart
- https://docs.github.com/en/copilot/using-github-copilot/prompt-engineering-for-github-copilot

## Contacts: 
- Lisa Do -  https://linkedin.com/in/lisa-do
- Anshika Gupta - https://www.linkedin.com/in/anshika-gupta-53944316

