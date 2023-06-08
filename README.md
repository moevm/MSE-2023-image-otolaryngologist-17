# MSE-2023-image-otolaringologist-17
Выделение носовой перегородки на КТ-снимках

## Инструкция по сборке и запуску проекта:
  Дополнительный функционал предлагается реализовать в виде загружаемого модуля (https://www.slicer.org/wiki/Documentation/4.5/Developers/Modules). 
  
  Сборка (https://www.slicer.org/wiki/Documentation/4.5/Developers/Tutorials/CreateLoadableModule) происходит следующим образом:
  > "C:\Qt\Tools\CMake_64\bin\cmake.exe" -G "Visual Studio 16 2019" -A x64 -DSlicer_DIR:PATH=C:\Slicer\Slicer_BUILD\Slicer-build C:\Extention_dir\Extention_Source
  > "С:\Qt\Tools\CMake_64\bin\cmake.exe" --build . --config Release
  
  До добавления в Slicer расширение может быть открыто из папки сборки.
  
  Для работы с UI 3D Slicer предлагает свою версию Qt Designer с набором виджетов, описание которых можно найти здесь. Для того, чтобы запустить Qt Designer, в 3D Slicer нужно найти: Edit -> Application Settings -> Developer -> Qt Designer -> launch. 
  
  Сами UI-файлы находятся в директории модуля по адресу /Resources/UI, основной файл – q[ModuleName]ModuleWidget.ui. Логика виджета описана в директории модуля в qSlicer[ModuleName]ModuleWidget.h/cxx.
  
  Дополнительно виджеты можно объявить в папке Widgets.
  
## Инструкция по использованию расширения:
  Пользовательский интерфейс предполагается построить таким образом, чтобы действия разных категорий находились в рамках одного модуля, но на разных вкладках:
  
  ![](https://media.discordapp.net/attachments/1096592198872600698/1116455530706239700/image.png?width=817&height=237)
  
  Так для вкладки, отвечающей за автоматизированное построение носовой перегородки предлагается ограничится одной кнопкой с соответствующим функционалом. Возможно дополнительно предусмотреть наличие меню, с выбором конкретного КТ пациента (как это сделано в базовых расширениях слайсера), если таких пациентов было открыто несколько.
  
   ![](https://media.discordapp.net/attachments/1096592198872600698/1116455993769996338/image.png?width=819&height=168)
   
   Вторая вкладка подразумевает наличие функциональной кнопки и области, в которой могут быть выведены необходимые значения.
   
   ![](https://media.discordapp.net/attachments/1096592198872600698/1116456143733149716/image.png?width=831&height=327)
   
   Подробнее обо всем:  https://www.slicer.org/wiki/Main_Page
   
## Инструкция по выделению перегородки вручную:
  [![Гайд по разметке](https://i.imgur.com/BeHjgIv.png)](https://vimeo.com/834458416?share=copy)
  
## Полезные ссылки по проекту:
  - Цели и задачи проекта (https://docs.google.com/presentation/d/1pPmOwicxTL7Wjn0Ni2oCvUQwYFB3UzjZ/edit?usp=sharing&ouid=107864795188107061876&rtpof=true&sd=true)
  - Презентация результатов проделанной работы (https://docs.google.com/presentation/d/1_WHw01NUS7mgcmJLPZXTisCtAd9oLsKy/edit?usp=sharing&ouid=107864795188107061876&rtpof=true&sd=true)
  - Wiki-страница проекта (http://wiki.osll.ru/doku.php/projects:otolaryngologist:start)
  - Обзор методов и технологий, используемых для анализа медицинских изображений (https://drive.google.com/file/d/1Dh2fooo0-RPrvb9GOyXTndl6gE6iMcZr/view?usp=sharing)
  - Результаты  разметки (https://disk.yandex.ru/d/fT51-E7dndob4w/Ready%20segmentations) (Авторизацию необходимо запросить у организатора курса Промышленная разработка ПО)
  - Скачать .rar архив с датасетом снимков КТ (https://disk.yandex.ru/d/fT51-E7dndob4w) (Авторизацию необходимо запросить у организатора курса Промышленная разработка ПО)
