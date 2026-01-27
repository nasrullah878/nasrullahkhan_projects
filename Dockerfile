# Use lightweight GCC image
FROM gcc:13

# Set working directory
WORKDIR /app

# Copy source code
COPY main.cpp .

# Compile C++ program
RUN g++ main.cpp -o app

# Run the app
CMD ["./app"]
