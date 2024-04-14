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

#include "Field_eEzsigndocumentlogType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigndocumentlogType::Field_eEzsigndocumentlogType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigndocumentlogType::Field_eEzsigndocumentlogType() {
    this->initializeModel();
}

Field_eEzsigndocumentlogType::~Field_eEzsigndocumentlogType() {}

void Field_eEzsigndocumentlogType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigndocumentlogType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigndocumentlogType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Clone", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::CLONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Login", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::LOGIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Sendcode", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SENDCODE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Badcode", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::BADCODE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Goodcode", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::GOODCODE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Badresponse", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::BADRESPONSE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Goodresponse", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::GOODRESPONSE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Authentication", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::AUTHENTICATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Createpage", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::CREATEPAGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Download", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::DOWNLOAD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Send", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SEND;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Sign", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Upload", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::UPLOAD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("View", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::VIEW;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Completion", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::COMPLETION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Changelimitdate", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::CHANGELIMITDATE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Unsign", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::UNSIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ImportFromInstanet", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::IMPORTFROMINSTANET;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SendEmail", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SENDEMAIL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FormCompletion", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::FORMCOMPLETION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SignatureAttachmentAdd", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTADD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SignatureAttachmentValidation", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTVALIDATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SignatureAttachmentRefused", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTREFUSED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SignatureAttachmentDeleted", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTDELETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DeclinedToSign", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::DECLINEDTOSIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DelayedSendEmail", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::DELAYEDSENDEMAIL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AnnotationAdded", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::ANNOTATIONADDED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Flatten", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::FLATTEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RegeneratePage", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::REGENERATEPAGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RegeneratePageForm", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::REGENERATEPAGEFORM;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Reassign", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentlogType::REASSIGN;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigndocumentlogType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigndocumentlogType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigndocumentlogType::CLONE:
            val = "Clone";
            break;
        case eField_eEzsigndocumentlogType::LOGIN:
            val = "Login";
            break;
        case eField_eEzsigndocumentlogType::SENDCODE:
            val = "Sendcode";
            break;
        case eField_eEzsigndocumentlogType::BADCODE:
            val = "Badcode";
            break;
        case eField_eEzsigndocumentlogType::GOODCODE:
            val = "Goodcode";
            break;
        case eField_eEzsigndocumentlogType::BADRESPONSE:
            val = "Badresponse";
            break;
        case eField_eEzsigndocumentlogType::GOODRESPONSE:
            val = "Goodresponse";
            break;
        case eField_eEzsigndocumentlogType::AUTHENTICATION:
            val = "Authentication";
            break;
        case eField_eEzsigndocumentlogType::CREATEPAGE:
            val = "Createpage";
            break;
        case eField_eEzsigndocumentlogType::DOWNLOAD:
            val = "Download";
            break;
        case eField_eEzsigndocumentlogType::SEND:
            val = "Send";
            break;
        case eField_eEzsigndocumentlogType::SIGN:
            val = "Sign";
            break;
        case eField_eEzsigndocumentlogType::UPLOAD:
            val = "Upload";
            break;
        case eField_eEzsigndocumentlogType::VIEW:
            val = "View";
            break;
        case eField_eEzsigndocumentlogType::COMPLETION:
            val = "Completion";
            break;
        case eField_eEzsigndocumentlogType::CHANGELIMITDATE:
            val = "Changelimitdate";
            break;
        case eField_eEzsigndocumentlogType::UNSIGN:
            val = "Unsign";
            break;
        case eField_eEzsigndocumentlogType::IMPORTFROMINSTANET:
            val = "ImportFromInstanet";
            break;
        case eField_eEzsigndocumentlogType::SENDEMAIL:
            val = "SendEmail";
            break;
        case eField_eEzsigndocumentlogType::FORMCOMPLETION:
            val = "FormCompletion";
            break;
        case eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTADD:
            val = "SignatureAttachmentAdd";
            break;
        case eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTVALIDATION:
            val = "SignatureAttachmentValidation";
            break;
        case eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTREFUSED:
            val = "SignatureAttachmentRefused";
            break;
        case eField_eEzsigndocumentlogType::SIGNATUREATTACHMENTDELETED:
            val = "SignatureAttachmentDeleted";
            break;
        case eField_eEzsigndocumentlogType::DECLINEDTOSIGN:
            val = "DeclinedToSign";
            break;
        case eField_eEzsigndocumentlogType::DELAYEDSENDEMAIL:
            val = "DelayedSendEmail";
            break;
        case eField_eEzsigndocumentlogType::ANNOTATIONADDED:
            val = "AnnotationAdded";
            break;
        case eField_eEzsigndocumentlogType::FLATTEN:
            val = "Flatten";
            break;
        case eField_eEzsigndocumentlogType::REGENERATEPAGE:
            val = "RegeneratePage";
            break;
        case eField_eEzsigndocumentlogType::REGENERATEPAGEFORM:
            val = "RegeneratePageForm";
            break;
        case eField_eEzsigndocumentlogType::REASSIGN:
            val = "Reassign";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigndocumentlogType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigndocumentlogType::eField_eEzsigndocumentlogType Field_eEzsigndocumentlogType::getValue() const {
    return m_value;
}

void Field_eEzsigndocumentlogType::setValue(const Field_eEzsigndocumentlogType::eField_eEzsigndocumentlogType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigndocumentlogType::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigndocumentlogType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi