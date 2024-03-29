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

#include "OAIEzsignbulksenddocumentmapping_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksenddocumentmapping_createObject_v1_Request::OAIEzsignbulksenddocumentmapping_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksenddocumentmapping_createObject_v1_Request::OAIEzsignbulksenddocumentmapping_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignbulksenddocumentmapping_createObject_v1_Request::~OAIEzsignbulksenddocumentmapping_createObject_v1_Request() {}

void OAIEzsignbulksenddocumentmapping_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsignbulksenddocumentmapping_isSet = false;
    m_a_obj_ezsignbulksenddocumentmapping_isValid = false;
}

void OAIEzsignbulksenddocumentmapping_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksenddocumentmapping_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksenddocumentmapping_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksenddocumentmapping, json[QString("a_objEzsignbulksenddocumentmapping")]);
    m_a_obj_ezsignbulksenddocumentmapping_isSet = !json[QString("a_objEzsignbulksenddocumentmapping")].isNull() && m_a_obj_ezsignbulksenddocumentmapping_isValid;
}

QString OAIEzsignbulksenddocumentmapping_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksenddocumentmapping_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignbulksenddocumentmapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksenddocumentmapping"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksenddocumentmapping));
    }
    return obj;
}

QList<OAIEzsignbulksenddocumentmapping_RequestCompound> OAIEzsignbulksenddocumentmapping_createObject_v1_Request::getAObjEzsignbulksenddocumentmapping() const {
    return a_obj_ezsignbulksenddocumentmapping;
}
void OAIEzsignbulksenddocumentmapping_createObject_v1_Request::setAObjEzsignbulksenddocumentmapping(const QList<OAIEzsignbulksenddocumentmapping_RequestCompound> &a_obj_ezsignbulksenddocumentmapping) {
    this->a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;
    this->m_a_obj_ezsignbulksenddocumentmapping_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_createObject_v1_Request::is_a_obj_ezsignbulksenddocumentmapping_Set() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isSet;
}

bool OAIEzsignbulksenddocumentmapping_createObject_v1_Request::is_a_obj_ezsignbulksenddocumentmapping_Valid() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isValid;
}

bool OAIEzsignbulksenddocumentmapping_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignbulksenddocumentmapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksenddocumentmapping_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksenddocumentmapping_isValid && true;
}

} // namespace OpenAPI
