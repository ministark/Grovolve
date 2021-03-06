//Copyright 2015 Ryan Wick

//This file is part of Grovolve.

//Grovolve is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Grovolve is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Grovolve.  If not, see <http://www.gnu.org/licenses/>.


#ifndef GLOBALS_H
#define GLOBALS_H

#include <QString>
#include <QLocale>
#include <QFont>
#include <QRectF>

enum PlantPartType {BRANCH, LEAF, SEEDPOD, NO_PART, ANY_PART};
enum GraphData {POPULATION,
                TALLEST_PLANT, NINETY_NINTH_PERCENTILE_PLANT_HEIGHT, NINETY_FIFTH_PERCENTILE_PLANT_HEIGHT, NINETIETH_PERCENTILE_PLANT_HEIGHT, MEDIAN_PLANT_HEIGHT,
                HEAVIEST_PLANT, NINETY_NINTH_PERCENTILE_PLANT_MASS, NINETY_FIFTH_PERCENTILE_PLANT_MASS, NINETIETH_PERCENTILE_PLANT_MASS, MEDIAN_PLANT_MASS,
                MOST_PLANT_ENERGY, NINETY_NINTH_PERCENTILE_PLANT_ENERGY, NINETY_FIFTH_PERCENTILE_PLANT_ENERGY, NINETIETH_PERCENTILE_PLANT_ENERGY, MEDIAN_PLANT_ENERGY,
                SEED_COUNT, ENERGY_PER_SEED};
enum AngleReference {PARENT, VERTICAL};
enum ClickMode {INFO, KILL, HELP};
enum HistoryOrganismType {AVERAGE_GENOME, RANDOM_ORGANISM};

class SimulationSettings;
class EnvironmentSettings;
class RandomNumbers;
class Lighting;
class Stats;

extern SimulationSettings * g_simulationSettings;
extern EnvironmentSettings * g_environmentSettings;
extern RandomNumbers * g_randomNumbers;
extern Lighting * g_lighting;
extern Stats * g_stats;

extern QFont g_largeFont;
extern QFont g_extraLargeFont;

extern int g_organismsSavedOrLoaded;
extern int g_seedsSavedOrLoaded;
extern int g_historyOrganismsSavedOrLoaded;

extern QRectF g_visibleRect;

QString formatDoubleForDisplay(double num, double decimalPlacesToDisplay, QLocale locale);
QFont getMonospaceFont();

#endif // GLOBALS_H
