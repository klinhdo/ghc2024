# Supercharge your Productivity: Enhance Software Development Lifecycle with GitHub Copilot.
### Contributor: Lisa Do, Anshika Gupta

## Instruction on downloading Visual Studio Code
- Download Visual Studio Code for your operating system at [aka.ms/vscode](https://aka.ms/vscode)

## Instruction on activating GitHub Copilot trial
- If you are a student, you can get access to GitHub Copilot for free as it is included in the GitHub Student Developer Pack.
    - To apply for the GitHub Student Developer Pack, go to [aka.ms/githubstudentpack](https://aka.ms/githubstudentpack).
 
- Instruction on claiming GitHub Copilot Coupon:
    - To be added prior to the conference

- Install the Copilot extension in Visual Studio Code using the link: https://docs.github.com/copilot/using-github-copilot/using-github-copilot-code-suggestions-in-your-editor?tool=vscode

## Prompts we are using today
**Quest 1: You are given an ancient scroll filled with lines of code, find out what it is about**
- Provide a brief summary of what function1() does.
- Summarize what this program is.
- (Bonus) What functionalities can a user uses in this program?

**Quest 2: Add your mark to the scrolls by writing the missing functions**
- Prompt #3: Implement listAvailableRooms() that list all rooms which are not currently booked.
- Paste this comment on line 18: \
  **// Generate a new tuple to store guest names, the number of guests they are bringing and whether they have paid**
- (Ctrl+I/Cmd+I) Write function cancelBooking
- (Bonus) As a hotel, you want to check if the weather this weekend is good. If it’s sunny, you can increase your price, if it’s rainy, you give a discount. 
Try this prompt: 
**Write a function that takes a date as input. This function will make an HTTP request to OpenWeather API to get weather data then output whether you should raise price or give a discount. The output is a string. **
- (Bonus - Once you compiled and run into a compiling error) There is a compiling error <insert error here>, explain this error and how to fix it​.

**Quest 3: Be a good player, add documentations**
- Write a detailed comment that describe what viewBookings() does, and documents the inputs and output of the function.
- (Bonus) Provide a documentation for the hotel management system intended for user. Describe its main features such as room booking, canceling bookings, viewing bookings, checking in/out guests, and listing available rooms.
- (Bonus) Write a one-liner comment that describe what “listAvailableRooms()” function does.

**Quest 4: Write test cases**
- Can you help generate unit tests for function listAvailableRooms()?
- What are some edge cases I should consider for function cancelBooking()?
- (Bonus) Write unit tests for function bookRoom(). The unit tests should be using the naming pattern Function_ShouldXXX_WhenXXX. Ensure that extractRoomName() is called at least once and assert that guestInfo is not null. 

**Quest 5: Get some feedback**
- Pretend to be a senior engineer, what improvements can be made on the function listAvailableRooms().
- (Bonus) Pretend to be a senior engineer and review the following code for a hotel management system. Please provide feedback on the completeness, correctness, and efficiency of the code.

# After the workshop
## Survey link
TODO: Add survey link

## After the workshop, here are some helpful links: 
- https://docs.github.com/en/copilot/quickstart
- https://docs.github.com/en/copilot/using-github-copilot/prompt-engineering-for-github-copilot
