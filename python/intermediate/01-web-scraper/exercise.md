# Project 1: Web Scraper

## Objective
Build a web scraper that extracts data from websites and saves it in a structured format.

## Skills You'll Learn
- HTTP requests with `requests` library
- HTML parsing with `BeautifulSoup`
- Working with APIs
- Data serialization (JSON, CSV)
- Error handling for network operations

## Requirements
1. Scrape news headlines from a news website
2. Extract title, summary, and publication date
3. Save data to JSON and CSV formats
4. Handle rate limiting and errors gracefully
5. Add command-line options for different sources

## Step-by-Step Guide
1. Install required packages: `pip install requests beautifulsoup4`
2. Make HTTP requests to fetch web pages
3. Parse HTML to extract specific elements
4. Clean and structure the extracted data
5. Save data in multiple formats

## Bonus Challenges
- Add support for multiple news sites
- Implement caching to avoid re-scraping
- Add email notifications for new articles
- Create a simple web interface to view results
- Add sentiment analysis to headlines

## Expected Output Example
```
Web Scraper Started
==================
Scraping: https://example-news-site.com

Found 25 articles:
1. "Breaking: New Technology Announced" - 2023-12-01
2. "Market Update: Stocks Rise" - 2023-12-01
...

Data saved to:
- articles.json (25 articles)
- articles.csv (25 articles)

Scraping completed in 3.2 seconds
```

## Files to Create
- `scraper.py` - Main scraper program
- `config.py` - Configuration for different websites
- `data_handler.py` - Functions for saving data

## Dependencies
- requests
- beautifulsoup4
- pandas (optional)

## Time Estimate
5-7 hours