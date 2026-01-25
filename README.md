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
