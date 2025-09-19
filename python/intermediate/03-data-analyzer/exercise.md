# Project 3: Data Analyzer and Visualizer

## Objective
Build a tool that analyzes CSV datasets and creates visualizations and statistical reports.

## Skills You'll Learn
- Data manipulation with pandas
- Statistical analysis
- Data visualization with matplotlib/seaborn
- Working with different data formats
- Report generation

## Requirements
1. Load and clean CSV data
2. Generate statistical summaries
3. Create various types of charts and graphs
4. Detect and handle missing data
5. Export analysis reports

## Step-by-Step Guide
1. Install required packages: `pip install pandas matplotlib seaborn`
2. Learn to load and explore datasets
3. Implement data cleaning functions
4. Create various visualization types
5. Generate comprehensive reports

## Bonus Challenges
- Add support for Excel and JSON files
- Implement correlation analysis
- Add interactive plots with plotly
- Create automated insights generation
- Build a web dashboard with Flask

## Expected Output Example
```
Data Analysis Report
===================
Dataset: sales_data.csv
Rows: 10,000 | Columns: 8

Data Quality:
- Missing values: 23 (0.3%)
- Duplicates: 5 rows
- Data types: 5 numeric, 3 categorical

Statistical Summary:
Sales Revenue:
- Mean: $2,450.50
- Median: $2,100.00
- Std Dev: $1,205.30

Top Insights:
1. Sales peak in December (+45% vs average)
2. Product Category A generates 60% of revenue
3. Strong correlation between price and customer rating (0.78)

Charts generated:
- sales_trend.png
- category_breakdown.png
- correlation_matrix.png
```

## Files to Create
- `data_analyzer.py` - Main analysis program
- `visualizer.py` - Chart generation functions
- `report_generator.py` - Report creation
- `sample_data.csv` - Sample dataset for testing

## Dependencies
- pandas
- matplotlib
- seaborn
- numpy

## Time Estimate
6-8 hours