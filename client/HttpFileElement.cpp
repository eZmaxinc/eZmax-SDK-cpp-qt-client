/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

#include "HttpFileElement.h"

namespace Ezmaxapi {

void HttpFileElement::setMimeType(const QString &mime) {
    mime_type = mime;
}

void HttpFileElement::setFileName(const QString &name) {
    local_filename = name;
}

void HttpFileElement::setVariableName(const QString &name) {
    variable_name = name;
}

void HttpFileElement::setRequestFileName(const QString &name) {
    request_filename = name;
}

bool HttpFileElement::isSet() const {
    return !local_filename.isEmpty() || !request_filename.isEmpty();
}

QString HttpFileElement::asJson() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
    return QString(bArray);
}

QJsonValue HttpFileElement::asJsonValue() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
    return QJsonDocument::fromJson(bArray.data()).object();
}

bool HttpFileElement::fromStringValue(const QString &instr) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
    file.write(instr.toUtf8());
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

bool HttpFileElement::fromJsonValue(const QJsonValue &jval) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
    file.write(QJsonDocument(jval.toObject()).toJson());
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

QByteArray HttpFileElement::asByteArray() const {
    QFile file(local_filename);
    QByteArray bArray;
    bool result = false;
    if (file.exists()) {
        result = file.open(QIODevice::ReadOnly);
        bArray = file.readAll();
        file.close();
    }
    if (!result) {
        qDebug() << "Error opening file " << local_filename;
    }
    return bArray;
}

bool HttpFileElement::fromByteArray(const QByteArray &bytes) {
    QFile file(local_filename);
    bool result = false;
    if (file.exists()) {
        file.remove();
    }
    result = file.open(QIODevice::WriteOnly);
    file.write(bytes);
    file.close();
    if (!result) {
        qDebug() << "Error creating file " << local_filename;
    }
    return result;
}

bool HttpFileElement::saveToFile(const QString &varName, const QString &localFName, const QString &reqFname, const QString &mime, const QByteArray &bytes) {
    setMimeType(mime);
    setFileName(localFName);
    setVariableName(varName);
    setRequestFileName(reqFname);
    return fromByteArray(bytes);
}

QByteArray HttpFileElement::loadFromFile(const QString &varName, const QString &localFName, const QString &reqFname, const QString &mime) {
    setMimeType(mime);
    setFileName(localFName);
    setVariableName(varName);
    setRequestFileName(reqFname);
    return asByteArray();
}

} // namespace Ezmaxapi
