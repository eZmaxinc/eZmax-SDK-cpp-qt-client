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

#include "OAIEzsigntemplatepackagemembership_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::OAIEzsigntemplatepackagemembership_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::OAIEzsigntemplatepackagemembership_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::~OAIEzsigntemplatepackagemembership_ResponseCompound_allOf() {}

void OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::initializeModel() {

    m_obj_ezsigntemplate_isSet = false;
    m_obj_ezsigntemplate_isValid = false;

    m_a_obj_ezsigntemplatepackagesignermembership_isSet = false;
    m_a_obj_ezsigntemplatepackagesignermembership_isValid = false;
}

void OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplate_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplate, json[QString("objEzsigntemplate")]);
    m_obj_ezsigntemplate_isSet = !json[QString("objEzsigntemplate")].isNull() && m_obj_ezsigntemplate_isValid;

    m_a_obj_ezsigntemplatepackagesignermembership_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagesignermembership, json[QString("a_objEzsigntemplatepackagesignermembership")]);
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("a_objEzsigntemplatepackagesignermembership")].isNull() && m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplate.isSet()) {
        obj.insert(QString("objEzsigntemplate"), ::OpenAPI::toJsonValue(obj_ezsigntemplate));
    }
    if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesignermembership"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

OAIEzsigntemplate_ResponseCompound OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::getObjEzsigntemplate() const {
    return obj_ezsigntemplate;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate) {
    this->obj_ezsigntemplate = obj_ezsigntemplate;
    this->m_obj_ezsigntemplate_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::is_obj_ezsigntemplate_Set() const{
    return m_obj_ezsigntemplate_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::is_obj_ezsigntemplate_Valid() const{
    return m_obj_ezsigntemplate_isValid;
}

QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::getAObjEzsigntemplatepackagesignermembership() const {
    return a_obj_ezsigntemplatepackagesignermembership;
}
void OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership) {
    this->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    this->m_a_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::is_a_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::is_a_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplate_isValid && m_a_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace OpenAPI
