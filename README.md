# KnowledgeNest - Advanced Learning Management System

## 🎓 Overview

KnowledgeNest is a comprehensive Learning Management System (LMS) built with modern web technologies and advanced SQL database management. This project transforms a simple frontend learning platform into a sophisticated, data-driven application with real-time analytics, user management, and comprehensive course tracking.

## 🚀 Features

### 🔐 Advanced Authentication & Authorization
- JWT-based authentication with session management
- Role-based access control (Admin, Instructor, Student)
- Password hashing with bcrypt
- Session tracking and management
- Activity logging and monitoring

### 📊 Comprehensive Analytics Dashboard
- Real-time platform statistics
- User growth tracking
- Course performance analytics
- Revenue and enrollment metrics
- Interactive charts and visualizations
- Data export capabilities (JSON/CSV)

### 🎯 Course Management System
- Complete course lifecycle management
- Module and lesson organization
- Video content integration
- Quiz and assessment system
- Progress tracking and completion certificates
- Review and rating system

### 🏗️ Advanced Database Architecture
- MySQL with optimized schema design
- Advanced indexing for performance
- Stored procedures for complex operations
- Database views for simplified queries
- Triggers for automated actions
- Transaction support for data integrity

### 📈 Learning Analytics
- Student progress tracking
- Lesson completion analytics
- Time spent analysis
- Skill development metrics
- Certificate generation
- Learning path recommendations

## 🛠️ Technology Stack

### Frontend
- **HTML5** - Semantic markup
- **CSS3** - Modern styling with custom properties
- **JavaScript (ES6+)** - Interactive functionality
- **Chart.js** - Data visualization
- **Font Awesome** - Icon library

### Backend
- **Node.js** - Runtime environment
- **Express.js** - Web framework
- **MySQL** - Primary database
- **JWT** - Authentication tokens
- **bcryptjs** - Password hashing
- **Multer** - File upload handling

### Database Features
- **Advanced SQL queries** with JOINs and subqueries
- **Stored procedures** for complex business logic
- **Triggers** for automated data management
- **Views** for simplified data access
- **Indexes** for optimized query performance
- **Foreign key constraints** for data integrity

## 📋 Prerequisites

Before setting up the project, ensure you have:

- **Node.js** (v14.0.0 or higher)
- **MySQL** (v8.0 or higher)
- **Git** for version control
- **Web browser** (Chrome, Firefox, Safari, Edge)

## 🚀 Installation & Setup

### 1. Database Setup

#### A. Create MySQL Database

1. **Start MySQL server** on your local machine
2. **Connect to MySQL** using your preferred client:

```bash
mysql -u root -p
```

3. **Run the database schema**:

```bash
mysql -u root -p < database/schema.sql
```

### 2. Install Dependencies

Navigate to the backend directory and install Node.js dependencies:

```bash
cd backend
npm install
```

### 3. Environment Configuration

Create a `.env` file in the backend directory:

```env
# Database Configuration
DB_HOST=localhost
DB_USER=root
DB_PASSWORD=your_mysql_password
DB_NAME=knowledgenest_lms

# JWT Configuration
JWT_SECRET=your-super-secret-jwt-key-here

# Server Configuration
PORT=3000
NODE_ENV=development
```

### 4. Start the Application

```bash
cd backend
npm start
```

The server will start on `http://localhost:3000`

### 5. Access the Frontend

Open your web browser and navigate to:

- **Homepage**: `http://localhost:3000`
- **Dashboard**: `http://localhost:3000/dashboard`
- **Login**: `http://localhost:3000/login`
- **Courses**: `http://localhost:3000/courses`

## 📊 Advanced SQL Features

### Database Schema Highlights

#### Key Tables
1. **Users** - Role-based user management
2. **Courses** - Course metadata and content
3. **Enrollments** - Student-course relationships with progress
4. **Lessons** - Individual learning content items
5. **Analytics Tables** - Comprehensive performance metrics

#### Advanced SQL Concepts Implemented

##### 1. Complex JOINs and Subqueries
```sql
-- Get comprehensive course analytics
SELECT 
    c.course_id,
    c.title,
    COUNT(DISTINCT e.user_id) as total_enrollments,
    AVG(e.progress_percentage) as avg_progress,
    AVG(cr.rating) as avg_rating,
    SUM(CASE WHEN e.payment_status = 'paid' THEN e.payment_amount ELSE 0 END) as revenue
FROM courses c
LEFT JOIN enrollments e ON c.course_id = e.course_id
LEFT JOIN course_reviews cr ON c.course_id = cr.course_id
WHERE c.status = 'published'
GROUP BY c.course_id, c.title
ORDER BY total_enrollments DESC;
```

##### 2. Stored Procedures
```sql
-- Calculate and update course completion rates
CREATE PROCEDURE CalculateCourseCompletion(IN courseId INT)
BEGIN
    DECLARE total_lessons INT DEFAULT 0;
    -- Complex business logic for progress calculation
    UPDATE enrollments SET progress_percentage = calculated_progress
    WHERE course_id = courseId;
END
```

##### 3. Database Views
```sql
-- Simplified course overview with statistics
CREATE VIEW course_overview AS
SELECT 
    c.*,
    u.first_name as instructor_first_name,
    cs.total_enrollments,
    cs.average_rating
FROM courses c
JOIN users u ON c.instructor_id = u.user_id
LEFT JOIN course_statistics cs ON c.course_id = cs.course_id;
```

##### 4. Triggers for Automation
```sql
-- Auto-issue certificates on course completion
CREATE TRIGGER issue_certificate_on_completion
    AFTER UPDATE ON enrollments
    FOR EACH ROW
BEGIN
    IF NEW.status = 'completed' AND OLD.status != 'completed' THEN
        INSERT INTO certificates (user_id, course_id, certificate_code, title)
        VALUES (NEW.user_id, NEW.course_id, GENERATED_CODE, COURSE_TITLE);
    END IF;
END
```

##### 5. Window Functions and Analytics
```sql
-- User growth analytics with window functions
SELECT 
    DATE(date_created) as date,
    COUNT(*) as new_users,
    SUM(COUNT(*)) OVER (ORDER BY DATE(date_created)) as cumulative_users
FROM users
WHERE date_created >= DATE_SUB(NOW(), INTERVAL 30 DAY)
GROUP BY DATE(date_created)
ORDER BY date;
```

## 🔧 API Endpoints

### Authentication
- `POST /api/auth/register` - User registration
- `POST /api/auth/login` - User login
- `GET /api/auth/profile` - Get user profile

### Analytics
- `GET /api/analytics/dashboard` - Platform analytics (Admin)
- `GET /api/analytics/instructor` - Instructor analytics
- `GET /api/analytics/student` - Student analytics
- `GET /api/analytics/export/:type` - Export data

### Courses
- `GET /api/courses` - List all courses
- `POST /api/courses` - Create new course
- `GET /api/courses/:id` - Get course details

## 🎯 Key Learning Outcomes

### Advanced DBMS Concepts Covered

1. **Database Design & Normalization**
   - 3NF normalized schema
   - Entity-relationship modeling
   - Foreign key constraints

2. **Query Optimization**
   - Strategic indexing
   - Query execution plans
   - Performance tuning

3. **Advanced SQL Operations**
   - Window functions
   - CTEs (Common Table Expressions)
   - Complex aggregations
   - JSON data handling

4. **Database Programming**
   - Stored procedures
   - User-defined functions
   - Triggers and events
   - Error handling

5. **Analytics & Reporting**
   - Data warehousing concepts
   - OLAP operations
   - Real-time analytics
   - Data visualization integration

## 📈 Real-World Applications

This project demonstrates:

- **E-learning Platform Development**
- **User Analytics and Reporting**
- **Payment Processing Integration**
- **Content Management Systems**
- **Performance Monitoring**
- **Scalable Database Architecture**

## 🔒 Security & Best Practices

- **Input validation** with Joi schemas
- **SQL injection prevention** with parameterized queries
- **Authentication** with JWT tokens
- **Password hashing** with bcrypt
- **Rate limiting** for API protection
- **Activity logging** for audit trails

## 👨‍💻 Author

**Vihaan Kashyap**
- Full-Stack Developer
- Database Architect
- Learning Technology Enthusiast

---

**This project showcases advanced SQL integration with modern web development, creating a comprehensive learning management system with real-world applicability.**
