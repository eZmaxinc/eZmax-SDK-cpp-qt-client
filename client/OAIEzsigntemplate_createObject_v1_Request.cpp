/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplate_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_createObject_v1_Request::OAIEzsigntemplate_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_createObject_v1_Request::OAIEzsigntemplate_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplate_createObject_v1_Request::~OAIEzsigntemplate_createObject_v1_Request() {}

void OAIEzsigntemplate_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplate_isSet = false;
    m_a_obj_ezsigntemplate_isValid = false;
}

void OAIEzsigntemplate_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplate_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplate, json[QString("a_objEzsigntemplate")]);
    m_a_obj_ezsigntemplate_isSet = !json[QString("a_objEzsigntemplate")].isNull() && m_a_obj_ezsigntemplate_isValid;
}

QString OAIEzsigntemplate_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplate"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplate));
    }
    return obj;
}

QList<OAIEzsigntemplate_RequestCompound> OAIEzsigntemplate_createObject_v1_Request::getAObjEzsigntemplate() const {
    return a_obj_ezsigntemplate;
}
void OAIEzsigntemplate_createObject_v1_Request::setAObjEzsigntemplate(const QList<OAIEzsigntemplate_RequestCompound> &a_obj_ezsigntemplate) {
    this->a_obj_ezsigntemplate = a_obj_ezsigntemplate;
    this->m_a_obj_ezsigntemplate_isSet = true;
}

bool OAIEzsigntemplate_createObject_v1_Request::is_a_obj_ezsigntemplate_Set() const{
    return m_a_obj_ezsigntemplate_isSet;
}

bool OAIEzsigntemplate_createObject_v1_Request::is_a_obj_ezsigntemplate_Valid() const{
    return m_a_obj_ezsigntemplate_isValid;
}

bool OAIEzsigntemplate_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplate_isValid && true;
}

} // namespace OpenAPI
