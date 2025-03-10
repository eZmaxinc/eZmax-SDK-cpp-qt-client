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

#include "Ezsigntemplate_createObject_v3_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_createObject_v3_Request::Ezsigntemplate_createObject_v3_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_createObject_v3_Request::Ezsigntemplate_createObject_v3_Request() {
    this->initializeModel();
}

Ezsigntemplate_createObject_v3_Request::~Ezsigntemplate_createObject_v3_Request() {}

void Ezsigntemplate_createObject_v3_Request::initializeModel() {

    m_a_obj_ezsigntemplate_isSet = false;
    m_a_obj_ezsigntemplate_isValid = false;
}

void Ezsigntemplate_createObject_v3_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_createObject_v3_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplate_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplate, json[QString("a_objEzsigntemplate")]);
    m_a_obj_ezsigntemplate_isSet = !json[QString("a_objEzsigntemplate")].isNull() && m_a_obj_ezsigntemplate_isValid;
}

QString Ezsigntemplate_createObject_v3_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_createObject_v3_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplate"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplate));
    }
    return obj;
}

QList<Ezsigntemplate_RequestCompoundV3> Ezsigntemplate_createObject_v3_Request::getAObjEzsigntemplate() const {
    return m_a_obj_ezsigntemplate;
}
void Ezsigntemplate_createObject_v3_Request::setAObjEzsigntemplate(const QList<Ezsigntemplate_RequestCompoundV3> &a_obj_ezsigntemplate) {
    m_a_obj_ezsigntemplate = a_obj_ezsigntemplate;
    m_a_obj_ezsigntemplate_isSet = true;
}

bool Ezsigntemplate_createObject_v3_Request::is_a_obj_ezsigntemplate_Set() const{
    return m_a_obj_ezsigntemplate_isSet;
}

bool Ezsigntemplate_createObject_v3_Request::is_a_obj_ezsigntemplate_Valid() const{
    return m_a_obj_ezsigntemplate_isValid;
}

bool Ezsigntemplate_createObject_v3_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplate_createObject_v3_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplate_isValid && true;
}

} // namespace Ezmaxapi
