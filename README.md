# Health-Coder-Alarm
مشروع "منبه المبرمج الصحي" هو أداة ذكية تم برمجتها بلغة C++ باستخدام Windows API . صمم هذا البرنامج ليكون رفيقك أثناء اعمل الطويل , حيث يضمن عدم نسيان شرب الماء و إراحة العينين.
المميزات المضافه في هذه النسخة:
تنبيهات مرئية: ظهور نوافذ منبثقة تجبرك على الانتباه حتى ان كنت مندمجا
تنبيهات صوتية: استخدام دالة Beep بترددات مدروسه لتنبهك صوتيا
نظام التوقيت : يعمل البرنامج بنظام الفترات الزمنيه لضمان الاستمرارية.

Health Coder alarm is a desktop utility built with C++ and Win32 API to promote wellness during long coding sessions.
Key Enhancements:
• Interactive UI: Uses Windows MessageBox to display critical reminders over all active windows.
• Auditory Feedback: Integrated system Beep sounds to provide an extra layer of notification.
• Non-Intrusive Monitoring: Prints logs to the console while waiting for the next cycle.
 Technical Details:
• Headers: <windows.h> for system interaction.
• Logic: Sequential loops with Sleep() for resource-efficient timing.
Future Updates
Plan to add a GUI where users can customize these beep frequencies and intervals.

📝 التحديثات الجديدة (UI & UX Update)
تمت إضافة واجهة مستخدم تفاعلية باستخدام تقنيات الويب لتعزيز تجربة المستخدم:
• التقنيات المستخدمة: HTML5 و CSS3.
• المميزات البصرية:
• تصميم عصري وأنيق (Minimalist Design) يعتمد على ألوان مريحة للعين (Pallet of Greens).
• أزرار تفاعلية تدعم تأثيرات الـ Hover والـ Active، حيث يرتفع الزر عند مرور المؤشر وينضغط عند النقر.
• تنسيق متجاوب يضمن ظهور التنبيهات والفقرات التحفيزية بشكل منظم.
🛠️ خريطة العمل القادمة (Roadmap)
• [x] تصميم واجهة المستخدم (UI Design).
• [ ] ربط أزرار الواجهة بمنطق البرنامج المكتوب بلغة ++C.
• [ ] تفعيل نظام التنبيهات الصوتية والمرئية بناءً على مدخلات المستخدم.

🚀 Latest Updates: Interactive UI/UX
I have successfully integrated a modern web interface to provide a better user experience:
• Technologies Used: Built with HTML5 and CSS3 for a clean and responsive look.
• Visual Enhancements:
• Color Palette: Used a soothing "Coder-Health" green theme (rgb(15, 107, 90)) to reduce eye strain.
• Interactive Buttons: Implemented custom CSS hover and active states. Buttons now lift when hovered and depress when clicked for a tactile feel.
• Typography: Selected professional fonts to ensure clarity and readability for long coding sessions.
🗺️ Project Roadmap
• [x] Initial C++ Logic (Core Functionality).
• [x] Interactive HTML/CSS UI Design.
• [ ] Next Step: Bridge the gap between C++ and the Web UI to trigger real-time system notifications.
<img width="1920" height="1080" alt="‏‏لقطة الشاشة (10)" src="https://github.com/user-attachments/assets/b8157fe8-54be-46c4-a4da-55c0290abfbe" />

التحديثات الجديده: أصبح البرنامج يدعم تفاعل المستخدم بشكل اكبر , تم تطويره ليتيح للمستخدم امكانية تحديد الوقت و اختيار لحظة بدء العد و اختيار توقف البرنامج .
