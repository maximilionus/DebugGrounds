<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Forest</Name>
    <ExportSettings>
        <Directory>output</Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\DebugGrounds\DG\source\shapefiles\Forests.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Create Trees</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="100"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_fraxinusav2s_f"/>
                    <Parameter Name="PROB" Value="80"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="10"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_pinuss2s_b_f"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="50"/>
                    <Parameter Name="MAXHEIGHT" Value="80"/>
                    <Parameter Name="MINDIST" Value="12"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_oleae1s_f"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\DebugGrounds\DG\source\shapefiles\Forests.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Stones in forest</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="100"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="sharpstone_03"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="20"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\DebugGrounds\DG\source\shapefiles\Forests_Remove.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Delete useless obj</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
