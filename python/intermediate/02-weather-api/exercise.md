# Project 2: Weather API Client

## Objective
Create a weather application that fetches and displays weather data from an API.

## Skills You'll Learn
- API integration and authentication
- JSON data handling
- Command-line argument parsing
- Data visualization basics
- Configuration management

## Requirements
1. Fetch current weather data for any city
2. Display 5-day weather forecast
3. Save favorite locations
4. Show weather alerts and warnings
5. Export data to different formats

## Step-by-Step Guide
1. Sign up for a free weather API (OpenWeatherMap)
2. Learn to make authenticated API requests
3. Parse JSON responses and extract relevant data
4. Implement location management
5. Add data export functionality

## Bonus Challenges
- Add weather maps using matplotlib
- Implement weather notifications
- Create a GUI with tkinter or PyQt
- Add historical weather data analysis
- Integrate with calendar applications

## Expected Output Example
```
Weather Client v1.0
==================

Current Weather in Milan, IT:
Temperature: 15°C (feels like 12°C)
Condition: Partly Cloudy
Humidity: 68%
Wind: 12 km/h NW
Pressure: 1013 hPa

5-Day Forecast:
Dec 2: 18°C/8°C - Sunny
Dec 3: 16°C/6°C - Cloudy
Dec 4: 12°C/4°C - Light Rain
Dec 5: 14°C/7°C - Partly Cloudy
Dec 6: 17°C/9°C - Sunny
```

## Files to Create
- `weather_app.py` - Main application
- `api_client.py` - API interaction functions
- `config.json` - Configuration and saved locations
- `weather_display.py` - Formatting and display functions

## Dependencies
- requests
- argparse (built-in)
- matplotlib (optional, for charts)

## Time Estimate
4-6 hours