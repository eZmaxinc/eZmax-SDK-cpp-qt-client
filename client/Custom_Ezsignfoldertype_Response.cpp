/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Custom_Ezsignfoldertype_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_Ezsignfoldertype_Response::Custom_Ezsignfoldertype_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_Ezsignfoldertype_Response::Custom_Ezsignfoldertype_Response() {
    this->initializeModel();
}

Custom_Ezsignfoldertype_Response::~Custom_Ezsignfoldertype_Response() {}

void Custom_Ezsignfoldertype_Response::initializeModel() {

    m_pki_ezsignfoldertype_id_isSet = false;
    m_pki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_b_ezsignfoldertype_sendproofezsignsigner_isSet = false;
    m_b_ezsignfoldertype_sendproofezsignsigner_isValid = false;

    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet = false;
    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid = false;

    m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet = false;
    m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid = false;

    m_b_ezsignfoldertype_delegate_isSet = false;
    m_b_ezsignfoldertype_delegate_isValid = false;

    m_b_ezsignfoldertype_discussion_isSet = false;
    m_b_ezsignfoldertype_discussion_isValid = false;

    m_b_ezsignfoldertype_reassignezsignsigner_isSet = false;
    m_b_ezsignfoldertype_reassignezsignsigner_isValid = false;

    m_b_ezsignfoldertype_reassignuser_isSet = false;
    m_b_ezsignfoldertype_reassignuser_isValid = false;
}

void Custom_Ezsignfoldertype_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_Ezsignfoldertype_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfoldertype_id, json[QString("pkiEzsignfoldertypeID")]);
    m_pki_ezsignfoldertype_id_isSet = !json[QString("pkiEzsignfoldertypeID")].isNull() && m_pki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_b_ezsignfoldertype_sendproofezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_sendproofezsignsigner, json[QString("bEzsignfoldertypeSendproofezsignsigner")]);
    m_b_ezsignfoldertype_sendproofezsignsigner_isSet = !json[QString("bEzsignfoldertypeSendproofezsignsigner")].isNull() && m_b_ezsignfoldertype_sendproofezsignsigner_isValid;

    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner, json[QString("bEzsignfoldertypeAllowdownloadattachmentezsignsigner")]);
    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet = !json[QString("bEzsignfoldertypeAllowdownloadattachmentezsignsigner")].isNull() && m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid;

    m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_allowdownloadproofezsignsigner, json[QString("bEzsignfoldertypeAllowdownloadproofezsignsigner")]);
    m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet = !json[QString("bEzsignfoldertypeAllowdownloadproofezsignsigner")].isNull() && m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid;

    m_b_ezsignfoldertype_delegate_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_delegate, json[QString("bEzsignfoldertypeDelegate")]);
    m_b_ezsignfoldertype_delegate_isSet = !json[QString("bEzsignfoldertypeDelegate")].isNull() && m_b_ezsignfoldertype_delegate_isValid;

    m_b_ezsignfoldertype_discussion_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_discussion, json[QString("bEzsignfoldertypeDiscussion")]);
    m_b_ezsignfoldertype_discussion_isSet = !json[QString("bEzsignfoldertypeDiscussion")].isNull() && m_b_ezsignfoldertype_discussion_isValid;

    m_b_ezsignfoldertype_reassignezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_reassignezsignsigner, json[QString("bEzsignfoldertypeReassignezsignsigner")]);
    m_b_ezsignfoldertype_reassignezsignsigner_isSet = !json[QString("bEzsignfoldertypeReassignezsignsigner")].isNull() && m_b_ezsignfoldertype_reassignezsignsigner_isValid;

    m_b_ezsignfoldertype_reassignuser_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldertype_reassignuser, json[QString("bEzsignfoldertypeReassignuser")]);
    m_b_ezsignfoldertype_reassignuser_isSet = !json[QString("bEzsignfoldertypeReassignuser")].isNull() && m_b_ezsignfoldertype_reassignuser_isValid;
}

QString Custom_Ezsignfoldertype_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_Ezsignfoldertype_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("pkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_b_ezsignfoldertype_sendproofezsignsigner_isSet) {
        obj.insert(QString("bEzsignfoldertypeSendproofezsignsigner"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_sendproofezsignsigner));
    }
    if (m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet) {
        obj.insert(QString("bEzsignfoldertypeAllowdownloadattachmentezsignsigner"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner));
    }
    if (m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet) {
        obj.insert(QString("bEzsignfoldertypeAllowdownloadproofezsignsigner"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_allowdownloadproofezsignsigner));
    }
    if (m_b_ezsignfoldertype_delegate_isSet) {
        obj.insert(QString("bEzsignfoldertypeDelegate"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_delegate));
    }
    if (m_b_ezsignfoldertype_discussion_isSet) {
        obj.insert(QString("bEzsignfoldertypeDiscussion"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_discussion));
    }
    if (m_b_ezsignfoldertype_reassignezsignsigner_isSet) {
        obj.insert(QString("bEzsignfoldertypeReassignezsignsigner"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_reassignezsignsigner));
    }
    if (m_b_ezsignfoldertype_reassignuser_isSet) {
        obj.insert(QString("bEzsignfoldertypeReassignuser"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldertype_reassignuser));
    }
    return obj;
}

qint32 Custom_Ezsignfoldertype_Response::getPkiEzsignfoldertypeId() const {
    return m_pki_ezsignfoldertype_id;
}
void Custom_Ezsignfoldertype_Response::setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id) {
    m_pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    m_pki_ezsignfoldertype_id_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_pki_ezsignfoldertype_id_Set() const{
    return m_pki_ezsignfoldertype_id_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_pki_ezsignfoldertype_id_Valid() const{
    return m_pki_ezsignfoldertype_id_isValid;
}

QString Custom_Ezsignfoldertype_Response::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Custom_Ezsignfoldertype_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeSendproofezsignsigner() const {
    return m_b_ezsignfoldertype_sendproofezsignsigner;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeSendproofezsignsigner(const bool &b_ezsignfoldertype_sendproofezsignsigner) {
    m_b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    m_b_ezsignfoldertype_sendproofezsignsigner_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_sendproofezsignsigner_Set() const{
    return m_b_ezsignfoldertype_sendproofezsignsigner_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_sendproofezsignsigner_Valid() const{
    return m_b_ezsignfoldertype_sendproofezsignsigner_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeAllowdownloadattachmentezsignsigner() const {
    return m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeAllowdownloadattachmentezsignsigner(const bool &b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Set() const{
    return m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Valid() const{
    return m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeAllowdownloadproofezsignsigner() const {
    return m_b_ezsignfoldertype_allowdownloadproofezsignsigner;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeAllowdownloadproofezsignsigner(const bool &b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    m_b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Set() const{
    return m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Valid() const{
    return m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeDelegate() const {
    return m_b_ezsignfoldertype_delegate;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeDelegate(const bool &b_ezsignfoldertype_delegate) {
    m_b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    m_b_ezsignfoldertype_delegate_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_delegate_Set() const{
    return m_b_ezsignfoldertype_delegate_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_delegate_Valid() const{
    return m_b_ezsignfoldertype_delegate_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeDiscussion() const {
    return m_b_ezsignfoldertype_discussion;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeDiscussion(const bool &b_ezsignfoldertype_discussion) {
    m_b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    m_b_ezsignfoldertype_discussion_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_discussion_Set() const{
    return m_b_ezsignfoldertype_discussion_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_discussion_Valid() const{
    return m_b_ezsignfoldertype_discussion_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeReassignezsignsigner() const {
    return m_b_ezsignfoldertype_reassignezsignsigner;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeReassignezsignsigner(const bool &b_ezsignfoldertype_reassignezsignsigner) {
    m_b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    m_b_ezsignfoldertype_reassignezsignsigner_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_reassignezsignsigner_Set() const{
    return m_b_ezsignfoldertype_reassignezsignsigner_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_reassignezsignsigner_Valid() const{
    return m_b_ezsignfoldertype_reassignezsignsigner_isValid;
}

bool Custom_Ezsignfoldertype_Response::isBEzsignfoldertypeReassignuser() const {
    return m_b_ezsignfoldertype_reassignuser;
}
void Custom_Ezsignfoldertype_Response::setBEzsignfoldertypeReassignuser(const bool &b_ezsignfoldertype_reassignuser) {
    m_b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    m_b_ezsignfoldertype_reassignuser_isSet = true;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_reassignuser_Set() const{
    return m_b_ezsignfoldertype_reassignuser_isSet;
}

bool Custom_Ezsignfoldertype_Response::is_b_ezsignfoldertype_reassignuser_Valid() const{
    return m_b_ezsignfoldertype_reassignuser_isValid;
}

bool Custom_Ezsignfoldertype_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_sendproofezsignsigner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_delegate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_discussion_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_reassignezsignsigner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_reassignuser_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_Ezsignfoldertype_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldertype_id_isValid && true;
}

} // namespace Ezmaxapi
