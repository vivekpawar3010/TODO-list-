# TODO List Project

This is the original TODO List project from my first semester of coding journey in the last year.

## Project History

- This project was built during the first semester of my coding studies.
- It represents an early version of my work and learning in web development.
- The current codebase is a simple TODO list app with an HTML front-end.

## Version Context

- Previous version: early coursework build.
- Current version: a beginner-level TODO list application created during my first semester of learning.

## Later Deployment

After this early project, I continued building more advanced apps.
One of those deployed apps is **GenZDay**, available at:

https://genzday.vercel.app

This later project is a more complete React and AI-powered productivity dashboard, showing how my skills advanced after the TODO list app.

## Data Storage

- The TODO app saves its data in the browser using `localStorage`.
- When the page loads, it checks for saved values:
  - `routine`
  - `todayTasks`
  - `weekTasks`
- If saved data exists, it loads and parses that JSON so your tasks and routine are restored.
- If no saved data is found, the app starts with default task and routine items.
- Every time you edit a routine item, add/remove a task, or toggle a task complete state, the app updates `localStorage` with the latest arrays.
- This means your tasks stay available after refreshing the page or closing and reopening the browser, until you clear browser storage.

## Notes

- Keep this project as a record of the beginning of my coding journey.
- Use `README.md` to document how the project evolved over time.
