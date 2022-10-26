/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_createObject_v1_Request::OAIEzsigntemplatedocument_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_createObject_v1_Request::OAIEzsigntemplatedocument_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_createObject_v1_Request::~OAIEzsigntemplatedocument_createObject_v1_Request() {}

void OAIEzsigntemplatedocument_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatedocument_isSet = false;
    m_a_obj_ezsigntemplatedocument_isValid = false;
}

void OAIEzsigntemplatedocument_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatedocument_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatedocument, json[QString("a_objEzsigntemplatedocument")]);
    m_a_obj_ezsigntemplatedocument_isSet = !json[QString("a_objEzsigntemplatedocument")].isNull() && m_a_obj_ezsigntemplatedocument_isValid;
}

QString OAIEzsigntemplatedocument_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatedocument.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatedocument"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatedocument));
    }
    return obj;
}

QList<OAIEzsigntemplatedocument_RequestCompound> OAIEzsigntemplatedocument_createObject_v1_Request::getAObjEzsigntemplatedocument() const {
    return a_obj_ezsigntemplatedocument;
}
void OAIEzsigntemplatedocument_createObject_v1_Request::setAObjEzsigntemplatedocument(const QList<OAIEzsigntemplatedocument_RequestCompound> &a_obj_ezsigntemplatedocument) {
    this->a_obj_ezsigntemplatedocument = a_obj_ezsigntemplatedocument;
    this->m_a_obj_ezsigntemplatedocument_isSet = true;
}

bool OAIEzsigntemplatedocument_createObject_v1_Request::is_a_obj_ezsigntemplatedocument_Set() const{
    return m_a_obj_ezsigntemplatedocument_isSet;
}

bool OAIEzsigntemplatedocument_createObject_v1_Request::is_a_obj_ezsigntemplatedocument_Valid() const{
    return m_a_obj_ezsigntemplatedocument_isValid;
}

bool OAIEzsigntemplatedocument_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatedocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatedocument_isValid && true;
}

} // namespace OpenAPI
