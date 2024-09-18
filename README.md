# Supercharge your Productivity: Enhance Software Development Lifecycle with GitHub Copilot.
### Contributor: Lisa Do, Anshika Gupta

## Instruction on downloading Visual Studio Code
- Download Visual Studio Code for your operating system at [aka.ms/vscode](https://aka.ms/vscode)

## Instruction on activating GitHub Copilot trial
- If you are a student, you can get access to GitHub Copilot for free as it is included in the GitHub Student Developer Pack.
    - To apply for the GitHub Student Developer Pack, go to [aka.ms/githubstudentpack](https://aka.ms/githubstudentpack).
 
- Otherwise, you can get a free 1-month trial:
    1. Go to https://github.com/features/copilot/plans
    2. Under "Copilot Individual", select "Start a free trial"
    3. If prompted, login to GitHub
    4. Go through the sign-up process 

5. Install the Copilot extension in Visual Studio Code using the link https://docs.github.com/copilot/using-github-copilot/using-github-copilot-code-suggestions-in-your-editor?tool=vscode

## Prompts we are using today
**Quest 1: You are given an ancient scroll filled with lines of code, find out what it is about**
- What does this program do? How many inputs does it take? Can you write it in one paragraph.
- Can you explain function checkOutGuest?
- (Bonus) Can you help me understand what this part of the code is doing? Specifically, I’d like to know what extractRoomName and updateRoomStatus are supposed to do.


**Quest 2: Add your mark to the scrolls by writing the missing functions**
- There is a compiling error, use GitHub Copilot to explain the error and see how to fix it​
- Help me implement a feature to list all rooms that are not currently booked in a hotel management system. – listAvailableRooms()​
- Code suggestion using in-line comments: Add comment “//Generate a new map to store guest names and their special requests”
- (Bonus) Write a new function to cancel a booking, this function takes room name and guest name, and returns whether the booking was successful
- (Bonus) As a hotel, you want to check if the weather this weekend is good. If it’s sunny, you can increase your price, if it’s rainy, you give a discount. Write a function that takes a date as input. This function will make an HTTP request to OpenWeather API to get weather data then output whether you should raise price or give a discount. The output is a string.

**Quest 3: Be a good player, add documentations**
- Provide a documentation for the hotel management system. Describe its main features such as room booking, canceling bookings, viewing bookings, checking in/out guests, and listing available rooms
- Write a one-liner comment that describe what “listAvailableRooms()” function does
- Write a detailed comment that describe what viewBookings() does, and documents the inputs and output of the function

**Quest 4: Write test cases**
- Can you help generate unit tests for function listAvailableRooms()?
- Write unit tests for function checkInGuest(). The unit tests should be using the naming pattern Function_ShouldXXX_WhenXXX. Ensure that extractRoomName() is called at least once and assert that guestInfo is not null. 
- What are some edge cases I should consider for function cancelBooking()?

**Quest 5: Get some feedback**
- Pretend to be a senior engineer and review the following code for a hotel management system. Please provide feedback on the completeness, correctness, and efficiency of the code.
- What improvements can be made on the function listAvailableRooms()

# After the workshop
## Survey link
TODO: Add survey link

## After the workshop, here are some helpful links: 
- https://docs.github.com/en/copilot/quickstart
- https://docs.github.com/en/copilot/using-github-copilot/prompt-engineering-for-github-copilot

