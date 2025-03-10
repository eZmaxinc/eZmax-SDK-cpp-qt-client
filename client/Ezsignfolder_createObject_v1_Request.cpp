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

#include "Ezsignfolder_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_createObject_v1_Request::Ezsignfolder_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_createObject_v1_Request::Ezsignfolder_createObject_v1_Request() {
    this->initializeModel();
}

Ezsignfolder_createObject_v1_Request::~Ezsignfolder_createObject_v1_Request() {}

void Ezsignfolder_createObject_v1_Request::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;

    m_obj_ezsignfolder_compound_isSet = false;
    m_obj_ezsignfolder_compound_isValid = false;
}

void Ezsignfolder_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;

    m_obj_ezsignfolder_compound_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfolder_compound, json[QString("objEzsignfolderCompound")]);
    m_obj_ezsignfolder_compound_isSet = !json[QString("objEzsignfolderCompound")].isNull() && m_obj_ezsignfolder_compound_isValid;
}

QString Ezsignfolder_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfolder));
    }
    if (m_obj_ezsignfolder_compound.isSet()) {
        obj.insert(QString("objEzsignfolderCompound"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfolder_compound));
    }
    return obj;
}

Ezsignfolder_Request Ezsignfolder_createObject_v1_Request::getObjEzsignfolder() const {
    return m_obj_ezsignfolder;
}
void Ezsignfolder_createObject_v1_Request::setObjEzsignfolder(const Ezsignfolder_Request &obj_ezsignfolder) {
    m_obj_ezsignfolder = obj_ezsignfolder;
    m_obj_ezsignfolder_isSet = true;
}

bool Ezsignfolder_createObject_v1_Request::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool Ezsignfolder_createObject_v1_Request::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

Ezsignfolder_RequestCompound Ezsignfolder_createObject_v1_Request::getObjEzsignfolderCompound() const {
    return m_obj_ezsignfolder_compound;
}
void Ezsignfolder_createObject_v1_Request::setObjEzsignfolderCompound(const Ezsignfolder_RequestCompound &obj_ezsignfolder_compound) {
    m_obj_ezsignfolder_compound = obj_ezsignfolder_compound;
    m_obj_ezsignfolder_compound_isSet = true;
}

bool Ezsignfolder_createObject_v1_Request::is_obj_ezsignfolder_compound_Set() const{
    return m_obj_ezsignfolder_compound_isSet;
}

bool Ezsignfolder_createObject_v1_Request::is_obj_ezsignfolder_compound_Valid() const{
    return m_obj_ezsignfolder_compound_isValid;
}

bool Ezsignfolder_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignfolder_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
