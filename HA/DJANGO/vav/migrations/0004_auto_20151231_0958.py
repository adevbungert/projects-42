# -*- coding: utf-8 -*-
# Generated by Django 1.9 on 2015-12-31 08:58
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('vav', '0003_auto_20151231_0948'),
    ]

    operations = [
        migrations.AddField(
            model_name='voiture',
            name='a_vendre',
            field=models.BooleanField(default=True),
        ),
        migrations.AddField(
            model_name='voiture',
            name='vendue',
            field=models.BooleanField(default=False),
        ),
    ]
