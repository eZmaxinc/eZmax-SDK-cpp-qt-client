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

#include "OAICustom_Ezsignformfielderror_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Ezsignformfielderror_Response::OAICustom_Ezsignformfielderror_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignformfielderror_Response::OAICustom_Ezsignformfielderror_Response() {
    this->initializeModel();
}

OAICustom_Ezsignformfielderror_Response::~OAICustom_Ezsignformfielderror_Response() {}

void OAICustom_Ezsignformfielderror_Response::initializeModel() {

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_a_obj_ezsignformfielderrortest_isSet = false;
    m_a_obj_ezsignformfielderrortest_isValid = false;
}

void OAICustom_Ezsignformfielderror_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignformfielderror_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfield_label_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_a_obj_ezsignformfielderrortest_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfielderrortest, json[QString("a_objEzsignformfielderrortest")]);
    m_a_obj_ezsignformfielderrortest_isSet = !json[QString("a_objEzsignformfielderrortest")].isNull() && m_a_obj_ezsignformfielderrortest_isValid;
}

QString OAICustom_Ezsignformfielderror_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignformfielderror_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::OpenAPI::toJsonValue(s_ezsignformfield_label));
    }
    if (a_obj_ezsignformfielderrortest.size() > 0) {
        obj.insert(QString("a_objEzsignformfielderrortest"), ::OpenAPI::toJsonValue(a_obj_ezsignformfielderrortest));
    }
    return obj;
}

QString OAICustom_Ezsignformfielderror_Response::getSEzsignformfieldLabel() const {
    return s_ezsignformfield_label;
}
void OAICustom_Ezsignformfielderror_Response::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    this->s_ezsignformfield_label = s_ezsignformfield_label;
    this->m_s_ezsignformfield_label_isSet = true;
}

bool OAICustom_Ezsignformfielderror_Response::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool OAICustom_Ezsignformfielderror_Response::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QList<OAICustom_Ezsignformfielderrortest_Response> OAICustom_Ezsignformfielderror_Response::getAObjEzsignformfielderrortest() const {
    return a_obj_ezsignformfielderrortest;
}
void OAICustom_Ezsignformfielderror_Response::setAObjEzsignformfielderrortest(const QList<OAICustom_Ezsignformfielderrortest_Response> &a_obj_ezsignformfielderrortest) {
    this->a_obj_ezsignformfielderrortest = a_obj_ezsignformfielderrortest;
    this->m_a_obj_ezsignformfielderrortest_isSet = true;
}

bool OAICustom_Ezsignformfielderror_Response::is_a_obj_ezsignformfielderrortest_Set() const{
    return m_a_obj_ezsignformfielderrortest_isSet;
}

bool OAICustom_Ezsignformfielderror_Response::is_a_obj_ezsignformfielderrortest_Valid() const{
    return m_a_obj_ezsignformfielderrortest_isValid;
}

bool OAICustom_Ezsignformfielderror_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignformfielderrortest.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignformfielderror_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfield_label_isValid && m_a_obj_ezsignformfielderrortest_isValid && true;
}

} // namespace OpenAPI
