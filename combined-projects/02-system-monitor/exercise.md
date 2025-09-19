# Project 2: System Resource Monitor

## Objective
Build a system monitoring tool with C for low-level system calls and Python for data presentation.

## Skills You'll Learn
- System programming in C
- Process and memory monitoring
- Real-time data visualization
- Inter-process communication
- System API usage

## Architecture
- **C Component**: Low-level system monitoring and data collection
- **Python Component**: Data aggregation, web interface, and alerting

## Requirements
1. C daemon for collecting system metrics
2. Python web dashboard for visualization
3. Real-time updates and alerts
4. Historical data storage
5. Configuration management

## Implementation Steps
1. Write C program to collect system metrics
2. Implement data communication (shared memory/pipes)
3. Create Python web interface with Flask/Django
4. Add real-time charts with JavaScript
5. Implement alerting system

## Expected Components
```
system-monitor/
├── daemon/
│   ├── monitor.c              # C monitoring daemon
│   ├── system_calls.c         # System call wrappers
│   └── data_collector.h       # Header definitions
├── web/
│   ├── app.py                 # Python web application
│   ├── templates/             # HTML templates
│   ├── static/                # CSS/JS files
│   └── database.py            # Data storage
├── config/
│   └── monitor.conf           # Configuration file
└── scripts/
    ├── start_monitor.sh       # Startup script
    └── install.sh             # Installation script
```

## Bonus Challenges
- Add network monitoring
- Implement log file analysis
- Create mobile app interface
- Add predictive analytics
- Integration with existing monitoring tools

## Time Estimate
12-15 hours