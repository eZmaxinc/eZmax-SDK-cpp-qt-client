/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagemembership_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_createObject_v1_Request::OAIEzsigntemplatepackagemembership_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_createObject_v1_Request::OAIEzsigntemplatepackagemembership_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_createObject_v1_Request::~OAIEzsigntemplatepackagemembership_createObject_v1_Request() {}

void OAIEzsigntemplatepackagemembership_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatepackagemembership_isSet = false;
    m_a_obj_ezsigntemplatepackagemembership_isValid = false;
}

void OAIEzsigntemplatepackagemembership_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatepackagemembership_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagemembership, json[QString("a_objEzsigntemplatepackagemembership")]);
    m_a_obj_ezsigntemplatepackagemembership_isSet = !json[QString("a_objEzsigntemplatepackagemembership")].isNull() && m_a_obj_ezsigntemplatepackagemembership_isValid;
}

QString OAIEzsigntemplatepackagemembership_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatepackagemembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagemembership"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagemembership));
    }
    return obj;
}

QList<OAIEzsigntemplatepackagemembership_RequestCompound> OAIEzsigntemplatepackagemembership_createObject_v1_Request::getAObjEzsigntemplatepackagemembership() const {
    return a_obj_ezsigntemplatepackagemembership;
}
void OAIEzsigntemplatepackagemembership_createObject_v1_Request::setAObjEzsigntemplatepackagemembership(const QList<OAIEzsigntemplatepackagemembership_RequestCompound> &a_obj_ezsigntemplatepackagemembership) {
    this->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;
    this->m_a_obj_ezsigntemplatepackagemembership_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_createObject_v1_Request::is_a_obj_ezsigntemplatepackagemembership_Set() const{
    return m_a_obj_ezsigntemplatepackagemembership_isSet;
}

bool OAIEzsigntemplatepackagemembership_createObject_v1_Request::is_a_obj_ezsigntemplatepackagemembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagemembership_isValid;
}

bool OAIEzsigntemplatepackagemembership_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatepackagemembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatepackagemembership_isValid && true;
}

} // namespace OpenAPI